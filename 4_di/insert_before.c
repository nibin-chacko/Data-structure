#include"main.h"

data_type insert_before(dlist **head,data_type gdata,data_type ndata)
{
    if(*head == NULL)
    {
	return LIST_EMPTY;
    }
    if((*head)->data == ndata)
    {
	insert_at_beg(head,gdata);
	return SUCCESS;
    }
    dlist *temp = *head;
    while(temp->next != NULL)
    {
	if(temp->next->data == ndata)
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
