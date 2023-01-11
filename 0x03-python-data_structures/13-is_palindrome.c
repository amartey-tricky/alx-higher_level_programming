#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: double pointer to head of list
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **head)
{
    listint_t *current = *head;
    int i = 0, j = 0, k = 0;
    int *array;

    if (head == NULL || *head == NULL)
        return (1);
    while (current != NULL)
    {
        current = current->next;
        i++;
    }
    array = malloc(sizeof(int) * i);
    if (array == NULL)
        return (0);
    current = *head;
    while (current != NULL)
    {
        array[j] = current->n;
        current = current->next;
        j++;
    }
    j--;
    while (k < j)
    {
        if (array[k] != array[j])
        {
            free(array);
            return (0);
        }
        k++;
        j--;
    }
    free(array);
    return (1);
}
