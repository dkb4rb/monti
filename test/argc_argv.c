#include "monty.h"

int main(int argc, char **argv)
{
    /** ESTA ES EL CONTADOR PARA SABER VALOR DE ARGUMENTOS*/
    if (argv[1] == NULL)
    {
        printf("USAGE: monty file\n");
        return (EXIT_FAILURE);
    }
    printf("%d\n", argc);
    return 0;
}