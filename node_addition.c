#include "monty.h"

/**
* _push - function that adds node to the head stack
* @head: head of the stack
* @add: new value
*
* Return: Null
*/
void _push(stack_t **head, int add)
{
	stack_t *new_node, *temp;

	temp = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (temp)
		temp->prev = new_node;
	new_node->add = add;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
