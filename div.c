#include "monty.h"

/**
 * op_div - divides top element of stack by second element top
 * @stack: top of the stack double pointer
 * @line_number: Monty byte code file line number
 */
void op_div(stack_t **stack, unsigned int line_number)
{
    if (*stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    if ((*stack)->n == 0)
    {
        fprintf(stderr, "L%d: division by zero\n", line_number);
        exit(EXIT_FAILURE);
    }

    (*stack)->next->n /= (*stack)->n;
    op_pop(stack, line_number); // Once divided pop top element
}
