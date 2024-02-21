#include "sort.h"

/**
 * swap - swaps 2 nodes
 * @head: points to the head of the list
 * @newnode1: first node variable
 * @newnode2: second node variable
 */

void swap(listint_t **head, listint_t **newnode1, listint_t *newnode2)
{
	(*newnode1)->next = newnode2->next;
	if (newnode2->next != NULL)
	{
		newnode2->next->prev = *newnode1;
	}
	newnode2->prev = (*newnode1)->prev;
	newnode2->next = *newnode1;
	if ((*newnode1)->prev != NULL)
	{
		(*newnode1)->prev->next = newnode2;
	}
	else
		*head = newnode2;
	(*newnode1)->prev = newnode2;
	*newnode1 = newnode2->prev;
}

/**
 * insertion_sort_list - sorting algorithm using insertion sort
 * @list: pointer to the head of the list.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *more, *tem;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}

	for (current = (*list)->next; current != NULL ; current = tem)
	{
		tem = current->next;
		more = current->prev;

		while (more != NULL && current->n < more->n)
		{
			swap(list, &more, current);
			print_list((const listint_t *)*list);
		}
	}

}
