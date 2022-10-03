#include <stdlib.h>
#include "lists.h"
/**
 * *Insert_node - insert a number in singly list
 * @head: pointer to address of head of ls
 * @number: integer to be include in nl
 * Return: Address of new node 
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_T *newnode, *temp;
	newnode = malloc(sizeof(listint_T));
	if (newnode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		newnode->n = number;
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	else if (number <= (*head)->n)
	{
		newnode->n = number;
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	else
	{
		temp = *head;
		while (temp->next != NULL && number > temp->next->n)
		{
			temp = temp->next;
		}
		newnode->n = number;
		newnode->next = temp->next;
		temp->next = newnode;
		return (newnode);
	}
	return (NULL);
}
