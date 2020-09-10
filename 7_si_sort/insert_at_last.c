#include "main.h"
int insert_at_last(slist **head,data_type data)
{
    slist *new = malloc(sizeof(slist));

    if(new == NULL)
    {
	return FAILURE;
    }
    new->data=data;
    new->link=NULL;

    if(*head == NULL)
    {
	*head = new;
	return SUCCESS;
    }
    slist *temp = *head;
    while(temp->link != NULL)
    {
	temp=temp->link;
    }
    temp->link=new;
    return SUCCESS;
}
