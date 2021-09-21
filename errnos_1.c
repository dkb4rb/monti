#include "monty.h"

int Bad_usage(void);
int malloc_err(void);
int fd_open_err(char *fd);
int Uknw_op_err(char *code, unsigned int line_number);
int no_int_err(void);

int Bad_usage(void)
{
    fprintf(stderr, "USAGE: monty file\n");
    return (EXIT_FAILURE);
}

int fd_open_err(char *fd)
{
    fprintf(stderr, "Error: Can't open file %s\n", fd);
    return (EXIT_FAILURE);
}

int Uknw_op_err(char *code, unsigned int line_number)
{
    fprintf(stderr, "L%u: unknown instruction %s\n",
            line_number, code);
    return (EXIT_FAILURE);
}

int malloc_err(void)
{
    fprintf(stderr, "Error: malloc failed\n");
    return (EXIT_FAILURE);
}