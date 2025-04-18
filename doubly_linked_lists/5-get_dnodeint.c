#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: pointer to the head of the list
 * @index: index of the node, starting from 0
 *
 * Return: address of the node at the given index, or NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *current = head;

while (current != NULL)
{
if (i == index)
{
return (current);
}
current = current->next;
i++;
}

return (NULL);
}
