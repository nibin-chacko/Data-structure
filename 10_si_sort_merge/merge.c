#include"main.h"


/*data_type merge(slist **head,slist1 **head1)
{
    if(*head == NULL)
    {
	return LIST_EMPTY;
    }
    if(*head1 == NULL)
    {
	return LIST_EMPTY1;
    }
    else
    {
	slist *temp = *head;
	//slist1 temp1 = *head1;
	while(temp->link != NULL)
	{
	    temp = temp->link;
	}
	printf("after while\n");
	temp->link = *head1;
	return SUCCESS;
    }
}*/
int merge(slist **head1,slist1 **head2)
{
    //validations
    if (*head1 == NULL || *head2 == NULL)
	return LIST_EMPTY;


    //temporary pointer
    slist *temp = *head1;

    //loop to reach till end of 1st list
    while (temp -> link)
    {
	    temp = temp -> link;

    }

    //connection between 1st and 2nd link
   temp -> link = *head2;

   sort(head1);
    return SUCCESS;
}


    
