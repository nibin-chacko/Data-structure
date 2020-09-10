#include"main.h"



void print_from_last(dlist *tail)
{
    if(tail == NULL)
    {
	printf("LIST IS EMPTY\n");
    }
    else
    {
	printf("Enterd datas are :");
    while(tail != NULL)   //check the condition of link is null or not
    {
	printf("%d  ",tail->data);
	tail=tail->prev;        //assigning new node address
    }
    }
    printf("\n");
}
 
