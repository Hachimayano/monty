#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
* pop - removes element at topmost position of stack
* @stack: stack provided by main in start.c
* @line_count: line reference for error messages
*
* Return: void
*/
void pop(stack_t **stack, unsigned int line_count)
{
	stack_t *tmp = NULL;

	if (!stack || !*stack)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_count);
		exit(EXIT_FAILURE);
	}

	tmp = (*stack)->next;
	free(*stack);
	*stack = tmp;
	if (!*stack)
		return; /* prevents errors as the next line could assign a NULL value */
	(*stack)->prev = NULL;
}