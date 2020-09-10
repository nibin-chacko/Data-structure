#include"main.h"
int insert(hash_table array[],data_t data)
{
    int i = data % SIZE;     //find the index value to store the data
    
     if(array[i].data == -1)         //checking first value is present or not
    {
	array[i].data = data;
	return SUCCESS;
    }
    else
    {
	hash_table *new = malloc(sizeof(hash_table));      //assign new memory
	new->index = i;
	new->data = data;
	new->link = NULL;
	if(array[i].link == NULL)
	{
	    array[i].link = new;
	    return SUCCESS;
	}
	else
	{
	    hash_table *temp = array[i].link;   
	    while(temp->link != NULL)     //traverse teh node
	    {
		temp = temp->link;
	    }
	    temp->link = new;
	    return SUCCESS;
	}
    }
}
