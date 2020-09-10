#include "main.h"
int insert_at_last(dlist **head,dlist **tail,data_type data)
{
    dlist *new = malloc(sizeof(dlist));      //allocate memory

    if(new == NULL)            //check the memory is allocated or not
    {
	return FAILURE;
    }
    new->data=data;    //assign the data
    new->prev=*tail;    //assign tail
    new->next = NULL;  //asign next null


    if(*tail == NULL)    
    {
	*head=*tail = new;   //in fisrt time head and tail make as new
	return SUCCESS;
    }
    (*tail)->next = new;    //tail next 
    *tail = new;
    return SUCCESS;
}
