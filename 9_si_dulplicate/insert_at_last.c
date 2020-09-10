#include "main.h"
int insert_at_last(slist **head,data_type data)
{
    slist *new = malloc(sizeof(slist));           //Allocating the memory

    if(new == NULL)             //check the memory is allocated or not
    {
	return FAILURE;
    }
    new->data=data;
    new->link=NULL;

    if(*head == NULL)           //check the list is empty
    {
	*head = new;
	return SUCCESS;
    }
    slist *temp = *head;
    while(temp->link != NULL)      //traverse the link
    {
	temp=temp->link;
    }
    temp->link=new;
    return SUCCESS;
}
