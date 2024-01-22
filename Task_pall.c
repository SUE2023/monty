#include"monty.h"
/**
 * f_pall - prints all the values on the stack
 * Description: starting from the top of the stack
 * @head: stack head
 * @counter: not used
 * Return: void
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
