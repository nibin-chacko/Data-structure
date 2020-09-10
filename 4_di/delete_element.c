#include"main.h"
data_type delete_element(dlist **head,data_type d)
{
    if(*head == NULL)
    {
	return LIST_EMPTY;
    }
    dlist *temp = *head;
    if(temp->data == d)
    {
	delete_first(head);
	return SUCCESS;
    }
    while(temp->next != NULL)
    {
	if(temp->next->data == d)
	{
	    dlist *temp2 = temp->next;
	    temp->next = temp2->next;
	   temp->prev = temp;
	    free(temp2);
	    return SUCCESS;
	}
	temp = temp->next;
    }
    return DATA_NOT_FOUND;
}
