#include"monty.h"
/**
 * f_rotl - rotates the stack
 * Description: to the top
 * @head: head stack
 * @counter: line_number
 * Return: void
 */
void f_rotl(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *temp, *aux;

	temp = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	aux = (*head)->next;
	aux->prev = NULL;
	while (temp->next != NULL)
	{
		temp = temp->;
	}
	temp= *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = aux;
}
