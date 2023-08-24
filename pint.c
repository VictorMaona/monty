#include "monty.h"

/**
 * op_pint - value at top of stack is printed.
 * @stack: top of the stack of double pointer.
 * @line_number: Monty byte code file line number.
 */
void op_pint(stack_t **stack, unsigned int line_number)
{
    if (*stack == NULL)
    {
        fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
        exit(EXIT_FAILURE);
    }

    printf("%d\n", (*stack)->n);
}
