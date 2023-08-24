#include "monty.h"

/**
 * op_pop - removes stack top member.
 * @stack: Top of the stack a double pointer.
 * @line_number: Monty byte code file line number.
 */
void op_pop(stack_t **stack, unsigned int line_number)
{
    if (*stack == NULL)
    {
        fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
        exit(EXIT_FAILURE);
    }

    stack_t *temp = *stack;
    *stack = (*stack)->next;

    if (*stack)
        (*stack)->prev = NULL;

    free(temp);
}
