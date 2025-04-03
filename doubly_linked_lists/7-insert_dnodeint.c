#include "lists.h"
#include <stdlib.h>



/**
* insert_dnodeint_at_index - inserts a new node at a given position
* @h: double pointer to the head of the list
* @idx: index where the new node should be added, starting from 0
* @n: value to be stored in the new node
*
* Return: address of the new node, or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *current = *h;
unsigned int i = 0;

if (idx == 0)
{
return add_dnodeint(h, n);
}

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return NULL;
}

new_node->n = n;
new_node->next = NULL;
new_node->prev = NULL;

while (current != NULL && i < idx - 1)
{
current = current->next;
i++;
}

if (current == NULL || (current->next == NULL && i < idx - 1))

{
free(new_node);
return NULL;
}

new_node->next = current->next;
new_node->prev = current;

if (current->next != NULL)
{
current->next->prev = new_node;
}

current->next = new_node;

return new_node;
}
