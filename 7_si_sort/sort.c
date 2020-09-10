#include "main.h"

data_type sort(slist **head)              
{
    if(*head == NULL)          //check the head is null or not
    {
	return LIST_EMPTY;
    }
    else
    {
    int temp3;                    //take a variable
    slist *temp1 = *head,*temp2 = *head;          
    for(temp1 = *head;temp1 != NULL ;temp1=temp1->link)         //loop for check the datas
    {
	for(temp2 = temp1->link;temp2 != NULL ;temp2 = temp2->link)
	{
	if(temp1->data > temp2->data)              //check the condition
	{
	    temp3 = temp1->data;                  //bubble sorting
	    temp1->data = temp2->data;            //    ""
	    temp2->data = temp3;                 //     ""
	}
	}
    }
    return SUCCESS;
    }
    
}
