#include"monty.h"
/**
 * f_add - adds the top two elements
 * Description:  of the stack
 * @stack_t: stack element
 * @counter: line_number
 * Return: void
 */
void f_add(stack_t, unsigned int counter)
{
	stack_t *h;
	int len, aux;

	len = 0;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack to short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
