#include "main.h"
int insert_at_last(slist **head,data_type data)
{
    slist *new = malloc(sizeof(slist));      //allocate memory

    if(new == NULL)
    {
	return FAILURE;
    }
    new->data=data;           //assign the data
    new->link=NULL;           //assign the next data address as null

    if(*head == NULL)        //check the head is null or not
    {
	*head = new;         //assign the head as new address
	return SUCCESS;
    }
    slist *temp = *head; 
    while(temp->link != NULL)     //check the node is ended or not
    {
	temp=temp->link;           //assign the next address
    }
    temp->link=new;                
    return SUCCESS;
}
