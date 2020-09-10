#include"main.h"



void print_list(dlist *head)
{
    if(head == NULL)
    {
	printf("LIST IS EMPTY.CANNOT PRINT.ENTER SOME DATAS\n");
	int options()
	{
	    return 1;
	}
    }
    else
    {
    dlist *temp;   //for store the value of head
    temp =(dlist *)head;   
    printf("Enterd datas are :");
    while(temp != NULL)   //check the condition of link is null or not
    {
	printf("%d  ",temp->data);
	temp=temp->next;        //assigning new node address
    }
    }
    printf("\n");
}
 
