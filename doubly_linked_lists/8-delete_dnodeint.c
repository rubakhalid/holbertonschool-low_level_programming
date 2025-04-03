#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - deletes the node at a given index
 * @head: double pointer to the head of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;
unsigned int i = 0;

if (*head == NULL)
{
return (-1);
}


{
*head = current->next;
if (current->next != NULL)
{
current->next->prev = NULL;
}
free(current);
return (1);
}
while (current != NULL && i < index)
{
current = current->next;
i++;
}
if (current == NULL)
{
return (-1);
}
if (current->prev != NULL)
{
current->prev->next = current->next;
}
if (current->next != NULL)
{
current->next->prev = current->prev;
}
free(current);
return (1);
}
