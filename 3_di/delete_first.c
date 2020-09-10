#include"main.h"
data_type delete_first(dlist **head,dlist **tail)
{
    if(*head == NULL)       //check the lsit is empty or not
    {
	return LIST_EMPTY;
    }
    
    if((*head)->next)        //check the head is null or not
    {
	dlist *temp = *head;  //assigning the temp as head

	free(*head);        //delete the head
	*head = temp->next;   //assigning the head as new address
        (*head)->prev = NULL;  //head prev is always null
	return SUCCESS;
    }
    free(*tail);   //if head is null the remove the tail
    *tail = NULL;   //if no datas assigning head and tail as NULL
    *head = NULL;
    return SUCCESS;
}
