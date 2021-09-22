#include "monty.h"

char *_getline(void);
void hashtag_handle(char *buff);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

/**
 * hashtag_handle - Remove Everithing after #
 * @buff: User Input
 * Return: Void
*/

void hashtag_handle(char *buff)
{
    int i;

    for (i = 0; buff[i] != '\0'; i++)
    {
        if (buff[i] == '#')
        {
            buff[i] = '\0';
            break;
        }
    }
}

/**
 * _getline - Read the Input
 * Return: Input
*/

char *_getline(void)
{
    int i, buffsize = BUFFSIZE, rd;
    char c = 0;
    char *buff = malloc(buffsize);

    if (buff == NULL)
    {
        free(buff);
        return (NULL);
    }

    for (i = 0; c != EOF && c != '\n'; i++)
    {
        fflush(stdin);
        rd = read(STDIN_FILENO, &c, 1);
        if (rd == 0)
        {
            free(buff);
            exit(EXIT_SUCCESS);
        }
        buff[i] = c;
        if (buff[0] == '\n')
        {
            free(buff);
            return ("\0");
        }
        if (i >= buffsize)
        {
            buff = _realloc(buff, buffsize, buffsize + 1);
            if (buff == NULL)
            {
                return (NULL);
            }
        }
    }
    buff[i] = '\0';
    hashtag_handle(buff);
    return (buff);
}

/**
 * _realloc - Reallocate your Memory
 * @ptr: Pointer
 * @old_size: previus Size Of the Pointer
 * @new_size: New Size Of the Pointer
 * Return: Void Pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    if (new_size == 0 && ptr != NULL)
    {
        free(ptr);
        return (NULL);
    }

    if (ptr == NULL)
        ptr = malloc(new_size);

    if (new_size == old_size)
        return (ptr);

    free(ptr);
    ptr = malloc(new_size);

    return (ptr);
}