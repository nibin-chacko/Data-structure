#include "main.h"

void peep(dlist *head,dlist *s_top)
{
    if(s_top == NULL)           //check the stack empty or not
    {
	printf("\nStack Empty\n");
    }
    else
    while(s_top)
    {
	printf("%d ",s_top->data);
	s_top = s_top->prev;
    }
    printf("\n");

}
