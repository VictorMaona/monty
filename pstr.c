#include "monty.h"

/**
 * pstr - string is printed beginning at top of stack.
 * @stack: top of the stack, a double pointer.
 * @line_number: Executing line number from Monty file.
 */
void pstr(stack_t **stack, unsigned int line_number)
{
    stack_t *temp = *stack;

    while (temp != NULL && temp->n != 0 && (temp->n >= 0 && temp->n <= 127))
    {
        putchar(temp->n);
        temp = temp->next;
    }

    putchar('\n');
}
