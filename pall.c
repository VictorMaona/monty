#include "monty.h"

/**
 * op_pall - all values on stack are printed
 * @stack: To the top of the stack double pointer.
 * @line_number: Monty byte code file line number
 */
void op_pall(stack_t **stack, unsigned int line_number)
{
    (void)line_number;

    stack_t *current = *stack;
    while (current)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}
