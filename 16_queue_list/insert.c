#include"main.h"

int insert(slist **front,slist **rear,int d)
{
    slist *new = malloc(sizeof(slist));   //memory allocation

    if(new == NULL)
    {
	return FAILURE;
    }
    new->data=d;        //assign the data
    new->link=NULL;
    if(*rear == NULL)        //if rear is null at firt time we need to increase the rear and front
    {
	*rear = new;
	*front = new;
    }
    else
    {
    while((*rear)->link != NULL)    
    {
	*rear = (*rear)->link;
    }
    (*rear)->link = new;
    return SUCCESS;
    }
}
