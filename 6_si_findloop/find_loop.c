#include"main.h"

data_type find_loop(slist *head)
{
    int c = 0;
    slist *temp1,*temp2;
    temp1 = head;    //assigning the values
    temp2 = head;
    if(head == NULL)         //check the list Empty or not
    {
	return LIST_EMPTY;
    }
    while(temp1 != NULL && temp2 != NULL && temp2->link != NULL)    //conditions
    {
	temp2 = temp2->link;     //assigning the next addresses
	if(temp1 == temp2)       //check head value and link values are same or not
	{
	    return FINDED; 
	}
    }
    return NOT_FINDED;
}


