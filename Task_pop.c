#include"monty.h"
/**
 * f_pop - prints the top
 * Description: print the top node
 * @head: head stack
 * @counter: line_number
 * Return: void
 */
void f_pop(stack_t **h, unsigned int counter)
{
	stack_t *head;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empy stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);

}