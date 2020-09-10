#include "main.h"

int create_loop(slist **head,data_type n)
{
    if(*head == NULL)
    {
	return LIST_EMPTY;
    }
    slist *temp = *head;
    while(temp != NULL)
    {
	if(temp->data == n)
	{
	   // *head = temp->link;
	    temp->link = *head;
    return SUCCESS;
	}
	temp = temp->link;
    }
    return DATA_NOT_FOUND;
}
