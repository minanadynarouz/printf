#include "main.h"

/**
 * add_node - function to add node to sll.
 * @head: header pointer pointing at first node.
 * @n: num arg to add to node.
 * Return: sll.
 */

list_t *add_node(list_t **head, int n);

/**
 * print_list - function to print list recived.
 * @h: sll.
 * Return: size of list.
 */

size_t print_list(const list_t *h);

/**
 * print_int - function to print int.
 * @args: list of unknown args.
 * Return: length.
 */

int print_int(va_list args)
{
	int num = va_arg(args, int);
	int count = 0;
	list_t *head;
	head = NULL;

	if (num == 0)
	{
		_putchar(0 + '0');
	}

	if (num < 0)
	{
		_putchar('-');
		count++;

		if (num == INT_MIN)
		{
			add_node(&head, INT_MIN % 10 + 64);
			num = -(INT_MIN / 10);
			count++;
		}
		else
		{
			num = -num;
		}
	}

	while (num != 0)
	{
		add_node(&head, num % 10 + '0');
		num /= 10;
		count++;
	}
	print_list(head);
	return (count);
}

size_t print_list(const list_t *h)
{
	size_t ele;
	ele = 0;

	while (h != NULL)
	{
		_putchar(h->n);
		h = h->next;
		ele++;
	}
	return (ele);
}

list_t *add_node(list_t **head, int num)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}

	new->n = num;
	new->next = (*head);
	*head = new;

	return (*head);
}
