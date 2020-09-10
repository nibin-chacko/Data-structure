#include "main.h"

void peep(st_array s)
{
    if(s.s_top == -1)           //check the stack empty or not
    {
	printf("Stack Empty\n");
    }
    else
    {
	while(s.s_top != -1)           
	{
	    printf("%d ",s.data[s.s_top]);  //print the data
	    (s.s_top)--;             //decrementb teh stack top
	}
	printf("\n");
    }
}

