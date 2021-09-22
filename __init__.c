#include "monty.h"

int main(int argc, char **argv)
{

    FILE *fd_scriptor = NULL;
    int success_code = EXIT_SUCCESS;

    /** ESTA ES EL CONTADOR PARA SABER VALOR DE ARGUMENTOS*/
    if (argc != 2)
        return (Bad_usage());

    if (argv[1] == NULL)
        return (Bad_usage());

    fd_scriptor = fopen(argv[1], "r");

    if (fd_scriptor == NULL)
        return (fd_open_err(argv[1]));

    success_code = run_mounty(fd_scriptor);
    fclose(fd_scriptor);
    return (success_code);
}
