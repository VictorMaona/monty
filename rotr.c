#include "monty.h"

/**
 * rotr - brings stack around to the bottom.
 * @stack: top of stack a double pointer.
 * @line_number: the Monty file line that is executed.
 */
void rotr(stack_t **stack, unsigned int line_number)
{
    stack_t *last, *secondLast;

    if (*stack == NULL || (*stack)->next == NULL)
        return;

    last = *stack;
    while (last->next != NULL)
        last = last->next;

    secondLast = last->prev;

    last->prev = NULL;
    last->next = *stack;
    (*stack)->prev = last;
    *stack = last;
    secondLast->next = NULL;
}
