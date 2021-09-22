#include "monty.h"

void (*get_of_opcode_func(char *opcode))(stack_t **, unsigned int);

void (*get_of_opcode_func(char *opcode))(stack_t **, unsigned int)
{

    instruction_t op_funcs[] = {
        {"push", _push},
        {"all", _pall},
        {NULL, NULL},
    };

    int i;

    for (i = 0; op_funcs[i].opcode; i++)
    {
        if (strcmp(opcode, op_funcs[i].opcode) == 0)
            return (op_funcs[i].f);
    }

    return (NULL);
}