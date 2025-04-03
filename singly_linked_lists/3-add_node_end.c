#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"



/**
* add_node_end - Adds a new node at the end of a list_t list.
* @head: A pointer to the head of the list.
* @str: The string to be duplicated and added to the list.
* 
* Return: The address of the new element, or NULL if it failed.
*/


list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *temp;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

new->str = strdup(str);
if (new->str == NULL)
{
free(new);
return (NULL);
}

new->len = 0;
while (new->str[new->len] != '\0')
new->len++;

new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}

temp = *head;
while (temp->next != NULL)
temp = temp->next;

temp->next = new;

return (new);
}
