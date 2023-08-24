#include "monty.h"

/**
 * mod - calculates rest of the second top element division.
 * @stack:  top of the stack, a double pointer.
 * @line_number: Monty file line that is being executed.
 */
void mod(stack_t **stack, unsigned int line_number)
{
    stack_t *temp;

    if (*stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
        free_all(stack);
        exit(EXIT_FAILURE);
    }

    if ((*stack)->n == 0)
    {
        fprintf(stderr, "L%d: division by zero\n", line_number);
        free_all(stack);
        exit(EXIT_FAILURE);
    }

    (*stack)->next->n %= (*stack)->n;
    temp = *stack;
    *stack = (*stack)->next;
    (*stack)->prev = NULL;
    free(temp);
}
