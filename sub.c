#include "monty.h"

/**
 * op_sub - subtracts first top element from second top stack.
 * @stack: top of stack a double pointer.
 * @line_number: Monty byte code file line number.
 */
void op_sub(stack_t **stack, unsigned int line_number)
{
    if (*stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    (*stack)->next->n -= (*stack)->n;
    op_pop(stack, line_number); // Pop top element
}
