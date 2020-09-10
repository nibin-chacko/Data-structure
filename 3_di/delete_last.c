#include "main.h"
int delete_last(dlist **head,dlist **tail)
{

    if(*head == NULL)
    {
	return LIST_EMPTY;
    }
    *tail = (*tail)->prev;
    if(*tail)
    {
	free((*tail)->next);
	(*tail)->next = NULL;
    return SUCCESS;
    }
    free(*head);
    *head = NULL;
    return SUCCESS;
}

