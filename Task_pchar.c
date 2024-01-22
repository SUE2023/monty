#include"monty.h"
/**
 * f_pchar - prints the char at the top of the stack
 * Description: followed by  a  new line
 * @head: stadk head
 * @counter: line_number
 * Return: void
 */
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pcar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fclose(bus.file);
		free(bus.content);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
