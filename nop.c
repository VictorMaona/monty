#include "monty.h"

/**
 * op_nop - carries out no operations
 * @stack: stack top is double pointed at
 * @line_number: The Monty byte code file line number
 */
void op_nop(stack_t **stack, unsigned int line_number)
{
    (void)stack;
    (void)line_number;
    /* This opcode does nothing */
}
