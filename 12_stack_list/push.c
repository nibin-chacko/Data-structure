#include "main.h"

int push(dlist **head,dlist **s_top,data_t data)
{
    dlist *new = malloc(sizeof(dlist));

    if(new == NULL)         //check the top
    {
	return STACK_OVERFLOW;
    }
    new->data = data;
    new->prev = *s_top;
    new->next = NULL;
    if(*s_top == NULL)
    {
	*head = *s_top = new;
	return SUCCESS;
    }
    (*s_top)->next = new;
    *s_top = new;
    return SUCCESS;
    
}
