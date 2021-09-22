#include "monty.h"

int stack_init(stack_t **stack);
int get_mode(stack_t *stack);
int free_stack(stack_t **stack);

int stack_init(stack_t **stack)
{
    stack_t *str;

    str = malloc(sizeof(stack_t));
    if (str == NULL)
        return (malloc_err());

    str->n = STACK;
    str->prev = NULL;
    str->next = NULL;

    *stack = str;
    return (EXIT_SUCCESS);
}
int get_mode(stack_t *stack)
{
    return (0);
}
int free_stack(stack_t **stack)
{
    return (0);
}