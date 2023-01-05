#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/**
 * insert_node - function in C that inserts a number into a sorted singly linked list
 *
 * @head: pointer to the head of the list
 * @number: number to be inserted
 *
 * Return: the address of the new node, or NULL if it failed
 *
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_node;
	listint_t *temp;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	if (new_node)
	{
		new_node->n = number;
		new_node->next = *head;

		if (new_node->next == NULL || new_node->n <= (*head)->n)
			*head = new_node;

		while (new_node->next && new_node->n > new_node->next->n)
		{
			temp = new_node->next;
			new_node->next = temp->next;
		}
		if (temp)
			temp->next = new_node;
	}

	return (new_node);
}
