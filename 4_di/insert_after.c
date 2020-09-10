#include"main.h"
data_type insert_after(dlist **head,data_type gdata,data_type ndata)
{
    if(*head == NULL)
    {
	return LIST_EMPTY;
    }
    dlist *temp = *head;
    while(temp != NULL)
    {
	if(temp->data == ndata)
	{
	    dlist *new = malloc(sizeof(dlist));
	    if(new == NULL)
	    {
		return FAILURE;
	    }
	    new->data = gdata;
	    new->next = temp->next;
	    new->prev = temp;
	    temp->next = new;
	    return SUCCESS;
	}
	temp=temp->next;
    }
    return DATA_NOT_FOUND;
}

