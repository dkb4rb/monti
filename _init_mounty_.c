#include "monty.h"
#include <string.h>
#include <stdio.h>

int run_mounty(FILE *fd_scriptor);
int empty_line(char *line, char *delims);

int empty_line(char *line, char *delims)
{
    int i, j;

    for (i = 0; line[i]; i++)
    {
        for (j = 0; delims[j]; j++)
        {
            if (line[i] == delims[j])
                break;
        }
        if (delims[j] == '\0')
            return (0);
    }

    return (1);
}

int run_mounty(FILE *fd_scriptor)
{
    stack_t *stack = NULL;
    char *line = NULL;
    size_t len = 0, _status_err_ = EXIT_SUCCESS;
    unsigned int num_line = 0, tok_prev = 0;
    void (*op_func)(stack_t **, unsigned int);

    if (stack_init(&stack) == EXIT_FAILURE)
        return (EXIT_FAILURE);
    while (getline(&line, &len, fd_scriptor) != -1)
    {
        num_line++;
        op_token = strtow(line, DELIMITS);

        if (op_token == NULL)
        {

            if (empty_line(line, DELIMITS))
                continue;

            return (malloc_err());
        }
        else if (op_token[0][0] == '#') /* Line of coment*/
        {
            printf("free_token");
            continue;
        }
        op_func = get_mode(op_token[0]);

        if (op_func == NULL)
        {
            printf("free_stacks");
            _status_err_ = Uknw_op_err(op_token[0], num_line);
            printf("free_token");
            break;
        }

        tok_prev = tok_array();
        op_func(stack, num_line);
        if (tok_array() != tok_prev)
        {
            if (op_token && op_token[tok_prev])
            {
                _status_err_ = atoi(op_token[tok_prev]);
            }
            else
            {
                _status_err_ = EXIT_FAILURE;
            }
            printf("free_token");
            break;
        }
        printf("free_token");
    }
    printf("free_stacks");

    if (line && *line == 0)
    {
        printf("free_line");
        return (malloc_err());
    }
    free(line);
    return (_status_err_);
}