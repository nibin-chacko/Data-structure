#include"main.h"



data_type find_node(slist **head,data_type d)
{
    data_type c=0,p=0;
    if(*head == NULL) //check the head is null or not
    {
	return FAILURE;
    }
    slist *temp = *head;
    while(temp->data != 0)
    {
	c++;               //increase the count
	if(temp->data == d)       //check the data is same or not
	{
	    return c;
	}
	if(temp->link == NULL)
	{
	    return FAILURE;
	}
	else
	temp=temp->link;      //assign new address

    }
    return FAILURE;
}
