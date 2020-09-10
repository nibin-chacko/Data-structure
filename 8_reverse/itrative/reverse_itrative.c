#include"main.h"
int reverse_itrative(slist **head)
{
    if(*head == NULL)
	return LIST_EMPTY;
    if((*head)->link == NULL)
          return FAILURE;
     // pointer to access all node
    slist *pre = *head;
    slist *temp = pre -> link;
    slist *nxt = pre -> link;
       // loop to reverse all node data using address
    while(temp)
    {


	if ((*head)->link != NULL)
	{
	    (*head) -> link = NULL;
	}
	temp = nxt -> link;
	nxt -> link = pre;
	// to update pointer
	if(temp != NULL)
	{
	    pre = nxt;
	    nxt = temp;
	}
	else
	{
	    *head = nxt;
	    return SUCCESS;
	}

    }
}


