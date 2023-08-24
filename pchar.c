#include "monty.h"

/**
 * pchar - prints the stack top most character.
 * @stack:  double pointer points to top of stack.
 * @line_number: Executing line number from Monty file.
 */
void pchar(stack_t **stack, unsigned int line_number)
{
    if (*stack == NULL)
    {
        fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
        free_all(stack);
        exit(EXIT_FAILURE);
    }

    if ((*stack)->n < 0 || (*stack)->n > 127)
    {
        fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
        free_all(stack);
        exit(EXIT_FAILURE);
    }

    putchar((*stack)->n);
    putchar('\n');

    pop(stack, line_number); // top element can be removed if have pop function
}
