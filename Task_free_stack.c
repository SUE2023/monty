#include"monty.h"
/**
 * free_stack - frees a doubly linked list
 * Description: frees a dobly linked list
 * @head: stack head
 * Return: void
 */
void free_stack(stack_t *head)
{
	stack_t *aux;

	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
