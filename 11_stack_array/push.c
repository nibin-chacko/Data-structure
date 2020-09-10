#include "main.h"

int push(st_array *s,data_t data)
{
    if(s->s_top == (SIZE -1))         //check the top
    {
	return STACK_OVERFLOW;
    }
    (s->s_top)++;        //increment
    s->data[s->s_top] = data;    //assign the data
    return SUCCESS;
}
