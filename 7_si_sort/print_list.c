#include"main.h"



void print_list(slist *head)
{
    slist *temp;   //for store the value of head
    temp = head;   
    while(temp != NULL)   //check the condition of link is null or not
    {
	printf("%d  ",temp->data);
	temp=temp->link;        //assigning new node address
    }
    printf("\n");
}
 
