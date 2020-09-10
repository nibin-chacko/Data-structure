#include "main.h"

data_type get_nth_last(slist **head,int p)
{
    int d =0;
    slist *temp1 = *head;
    slist *temp2 = *head;
    int c = 0;
/*    while (temp != NULL)    //loop for counting
    {
	c++;
	temp = temp->link;    //assigning new address
    }
    if(p > c)         //check the eneterd position is greater or not
    {
	return FAILURE;
    }
    d = (c - p)+1;       //assigning the which position data
    temp = *head;
    c = 0;
    while(temp != NULL)
    {
	c++;
	if(c == d)        
	{
	    return temp->data;
	}
	else
	    temp = temp->link;
    }
    return FAILURE;*/
    while( temp1 != NULL)
    {
	
	if(d < p)
	{
	    if(temp1->link)
	    {
		temp1 = temp1->link;       //asiign the next node address
		d++;
	    }
	    else
		return FAILURE;
	}
	else
	{
	    temp1 = temp1->link;
	    temp2 = temp2->link;
	}
    }
    return temp2->data;
}

