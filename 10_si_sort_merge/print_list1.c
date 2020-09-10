#include"main.h"


void print_list1(slist1 *head1)
{
    slist1 *temp;   //for store the value of head
    temp = head1;   
    while(temp != NULL)   //check the condition of link is null or not
    {
	printf("%d  ",temp->data1);
	temp=temp->link1;        //assigning new node address
    }
    printf("\n");
}
 
