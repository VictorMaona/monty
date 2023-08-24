#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>

/* Data structures */

/**
 * struct stack_s -  stack or queue are doubly linked list
 * @n: The integer
 * @prev: directs attention to the stack's or queue's prior entry.
 * @next: identifies item in stack or queue
 * Description: node structure of doubly linked list stack queues LIFO FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - Purpose of opcode
 * @opcode: its the opcode
 * @f: take care of opcode function
 * Description: purpose opcode queues stack LIFO FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* Opcode functions */

void op_div(stack_t **stack, unsigned int line_number);

/* Add more opcode functions here as needed */

#endif /* MONTY_H */
