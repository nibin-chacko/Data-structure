#include "main.h"
int delete_last(slist **head)
{

    if(*head == NULL)
    {
	return LIST_EMPTY;
    }
    if((*head)->link == NULL)
    {
	free(*head);
	*head = NULL;
	return SUCCESS;
    }
    slist *temp = *head;
    while(temp->link->link != NULL)
    {
	temp = temp->link;
    }
    free(temp->link);
    temp->link = NULL;
    return SUCCESS;
}

