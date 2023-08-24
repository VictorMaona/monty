#include "monty.h"

/**
 * op_add - add the top two stack components
 * @stack: Double pointing to very top of stack
 * @line_number: Monty byte code file line number
 */
void op_add(stack_t **stack, unsigned int line_number)
{

    	if (*stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    (*stack)->next->n += (*stack)->n;
    op_pop(stack, line_number); // Open the top component.
}
