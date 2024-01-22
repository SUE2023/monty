#include"monty.h"
/**
 * f_pint - prints the top element
 * Description: prints the top element
 * @head: stack head
 * @counter: line_number
 * Return: void
 */
void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empy\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
