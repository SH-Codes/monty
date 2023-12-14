#include "monty.h"

/**
 * f_div - divides the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_div(stack_t **head, unsigned int counter)
{
	int len = stack_length(*head);

	if (len < 2)
	{
		handle_error(counter, "can't div, stack too short");
	}

	else
	{
		stack_t *current = *head;

		if (current->n == 0)
		{
			handle_error(counter, "division by zero");
		}

		else
		{
			int result = current->next->n / current->n;

			f_pop(head, counter);
			/* Remove the top element */
			(*head)->n = result;
		}
	}
}
