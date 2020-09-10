#include "main.h"

data_type delete_duplicate(slist **head)
{
    if(*head == NULL)        //condition for list empty
    {
	return LIST_EMPTY;
    }
	int flag = 0;
	slist *temp1 = *head;
        slist *temp2 = temp1->link;
	while(temp2)       //loop to delete duplicate element
	{
		if(temp1->data == temp2->data)   //condition to check data is duplicate or not
		{
		    flag = 1;
		    temp1 ->link = temp2 ->link;    //update pointers
		    free(temp2);
		    temp2 = temp2-> link;
		}
		else
		{
		    temp2 = temp2 -> link;
		    if(temp2 == NULL)
		    {
			temp1 = temp1->link;
			temp2 = temp1->link;
		    }
		}
	}
	if(flag)
	    return SUCCESS;
	return FAILURE;
}

