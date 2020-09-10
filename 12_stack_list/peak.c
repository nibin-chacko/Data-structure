#include "main.h"


data_t peak(dlist *s_top,data_t *d)
{
     if(s_top == NULL)
     {
	 return FAILURE;
     }
    *d = (s_top)->data;
     

	return SUCCESS;
     
}
