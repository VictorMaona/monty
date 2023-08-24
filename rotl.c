#include "monty.h"

/**
 * rotl - brings the stack around to the top.
 * @stack: double pointer points to the top of stack.
 * @line_number: Executing line number from Monty file.
 */
void rotl(stack_t **stack, unsigned int line_number)
{
    stack_t *first, *last;

    if (*stack == NULL || (*stack)->next == NULL)
        return;

    first = *stack;
    last = *stack;

    while (last->next != NULL)
        last = last->next;

    *stack = first->next;
    first->next->prev = NULL;
    first->next = NULL;

    last->next = first;
    first->prev = last;
}
