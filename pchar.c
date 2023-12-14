#include "monty.h"

/**
 * f_pchar - prints the char at the top of the stack,
 * followed by a new line
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *current = *head;

	if (!current)
	{
		handle_error(counter, "can't pchar, stack empty");
	}

	else if (current->n > 127 || current->n < 0)
	{
		handle_error(counter, "can't pchar, value out of range");
	}

	else
	{
		printf("%c\n", current->n);
	}
}
