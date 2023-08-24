#include "monty.h"

/**
 * mul - multiply stack second top element of first element
 * @stack: double pointer points to top of stack.
 * @line_number: Executing line number from Monty file.
 */
void mul(stack_t **stack, unsigned int line_number)
{
    stack_t *temp;

    if (*stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
        free_all(stack);
        exit(EXIT_FAILURE);
    }

    (*stack)->next->n *= (*stack)->n;
    temp = *stack;
    *stack = (*stack)->next;
    (*stack)->prev = NULL;
    free(temp);
}
