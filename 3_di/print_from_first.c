#include"main.h"



void print_from_first(dlist *head)
{
    if(head == NULL)       //check the list is empty or not
    {
	printf("LIST IS EMPTY\n");
    }
    else
    {
	printf("Enterd datas are :");
	while(head != NULL)
	{
	    printf("%d ",head->data);   //print the datas
	    head=head->next;          //assigning the next addresss
	}
    }
    printf("\n");
}
 
