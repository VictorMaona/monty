#include "monty.h"

/**
 * op_push - stack by pushing element
 * @stack: To top the stack double pointer
 * @line_number: Monty byte code file line number
 */
void op_push(stack_t **stack, unsigned int line_number)
{
    if (!global_data.argument)
    {
        fprintf(stderr, "L%d: usage: push integer\n", line_number);
        exit(EXIT_FAILURE);
    }

    if (!is_integer(global_data.argument))
    {
        fprintf(stderr, "L%d: usage: push integer\n", line_number);
        free_stack(*stack);
        exit(EXIT_FAILURE);
    }

    stack_t *new_node = malloc(sizeof(stack_t));
    if (!new_node)
    {
        fprintf(stderr, "Error: malloc failed\n");
        free_stack(*stack);
        exit(EXIT_FAILURE);
    }

    new_node->n = atoi(global_data.argument);
    new_node->prev = NULL;
    new_node->next = *stack;

    if (*stack)
        (*stack)->prev = new_node;

    *stack = new_node;
}
