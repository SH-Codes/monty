#include "monty.h"

/**
 * f_sub - subtraction
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *current;

	int result, nodes;

	current = *head;

	for (nodes = 0; current != NULL; nodes++)
		current = current->next;

	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	current = *head;
	result = current->next->n - current->n;
	current->next->n = result;
	*head = current->next;
	free(current);
}
