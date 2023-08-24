#include "monty.h"

/**
 * op_swap - top two components of stack are swaped.
 * @stack: top of the stack double pointer.
 * @line_number: Number of line in Monty byte code file.
 */
void op_swap(stack_t **stack, unsigned int line_number)
{
    if (*stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    int temp = (*stack)->n;
    (*stack)->n = (*stack)->next->n;
    (*stack)->next->n = temp;
}
