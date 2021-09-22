#ifndef MONTY_H
#define MONTY_H

#define _PRINT(c) write(STDOUT_FILENO, c, strlen(c))
#define BUFFSIZE 1024
#define DELIMITS "\t\b\a\n"

#define STACK 0
#define QUEUE 1

/** GLOBAL OPCODE TOKEN */
extern char **op_token;

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <sys/errno.h>
#include <sys/fcntl.h>
#include <linux/limits.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
    char *opcode;
    void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

#define _GNU_SOURCE
#define _POSIX_C_SOURCE 200809L

/* ERRORS CASES */
int Bad_usage(void);
int malloc_err(void);
int fd_open_err(char *fd);
int Uknw_op_err(char *code, unsigned int line_number);
int no_int_err(void);

/* OPCODES MONTY FUNTIONS */
void _push(stack_t **stack, unsigned int num_line);
void _pall(stack_t **stack, unsigned int num_line);

/* FUNCTIONS STACKS */
int run_mounty(FILE *fd_scriptor);
int stack_init(stack_t **stack);
int get_mode(stack_t *stack);
int free_stack(stack_t **stack);

char **strtow(char *str, char *delims);
int is_delim(char ch, char *delims);
int get_word_length(char *str, char *delims);
int get_word_count(char *str, char *delims);
char *get_next_word(char *str, char *delims);

int empty_line(char *line, char *delims);
#endif /* MONTY_H */