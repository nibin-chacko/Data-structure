#include "main.h"

data_t pop(st_array *s,data_t *data)
{
    if(s->s_top == -1)
    {
	return STACK_UNDERFLOW;
    }
    *data = s->data[s->s_top];    //get the data
    --(s->s_top);                //decremenet the stack top
    return SUCCESS;
}
