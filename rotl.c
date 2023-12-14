#include "monty.h"

/**
 * f_rotl - rotates the stack to the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_rotl(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *current = *head, *temp;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}

	temp = (*head)->next;
	temp->prev = NULL;

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = *head;
	(*head)->next = NULL;
	(*head)->prev = current;
	(*head) = temp;
}
