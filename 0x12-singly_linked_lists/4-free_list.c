#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Function frees a list_t list
 * @head: The list_t list that is to be freed
 */
void free_list(list_t *head)
{
	list_t *tempo;

	while (head)
	{
		tempo = head->next;
		free(head->str);
		free(head);
		head = tempo;
	}
}
