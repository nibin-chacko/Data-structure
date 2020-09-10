#include"main.h"

int dequeue(slist **front,slist **rear)
{
    if(*front == NULL)     //check the list is empty or not
    {
    return LIST_EMPTY;
    }
    else
    {
	slist *temp = *front;    
	*front = temp->link;
	free(temp);     //free the memory
	if(*front == NULL)
	{
	    return LIST_EMPTY;
	}
	return SUCCESS;
    }
}
