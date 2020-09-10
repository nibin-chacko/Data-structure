#include "main.h"


data_t peak(st_array *s,int *d)
{
     if(s->s_top == -1)
     {
	 return FAILURE;
     }
    
     {
	 *d = (s->data[s->s_top]); //store value 

	return SUCCESS;
     }
}
