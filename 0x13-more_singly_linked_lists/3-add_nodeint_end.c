#include "lists.h"
/**
* add_nodeint_end - adds a node to the bottom
* @head: pointer to first node
* @n: value for new node
* Return: pointer to new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *node, *new = malloc(sizeof(listint_t));
if (!head || !new)
return (NULL);
new->next = NULL;
new->n = n;
if (!*head)
*head = new;
else
{
node = *head;
while (node->next)
node = node->next;
node->next = new;
}
return (new);
}
