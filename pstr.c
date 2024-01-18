#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * pstr - displays the contents of stack_t stack as a string
 * @stack: stack provided by main
 * @line_count: line reference for error messages
 *
 * Return: nothing
 */
void pstr(stack_t **stack, unsigned int line_count __attribute__((unused)))
{
	stack_t *current = *stack;

	while (current)
	{
		if (current->n <= 0 || current->n > 127)
			break;
		putchar((char) current->n);
		current = current->next;
	}
	putchar('\n');
}
