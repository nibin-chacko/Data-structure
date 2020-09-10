#include "main.h"
int insert_at_last(dlist **head,data_type data)
{
    dlist *new = malloc(sizeof(dlist));

    if(new == NULL)
    {
	return FAILURE;
    }
    new->data=data;
    new->next=NULL;
    new->prev=NULL;

    if(*head == NULL)
    {
	*head = new;
	return SUCCESS;
    }
    dlist *temp = *head;
    while(temp->next != NULL)
    {
	temp=temp->next;
    }
    temp->prev=temp;
    temp->next=new;
    return SUCCESS;
}
