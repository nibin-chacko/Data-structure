#include "main.h"

int pop(dlist **head,dlist **s_top)
{
    if(*head == NULL)   //check the stack is Empty or not
    {
	return STACK_UNDERFLOW;
    }
    *s_top = (*s_top)->prev;   //assign the prev address as s_top
    if(*s_top)
    {
	free((*s_top)->next);   //delete the last
	(*s_top)->next = NULL; //assign prev nod next is null
	return SUCCESS;
    }
    free(*head);     //if only one data
    *head = NULL;
    return SUCCESS;
}
