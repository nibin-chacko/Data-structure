#include"main.h"

int search(hash_table array[],data_t data)
{
    int i=data%SIZE;        //find the index of the given data
    if(array[i].data == -1)
    {
	return DATA_NOT_FOUND;
    }
    else
    {
	hash_table *temp = array[i].link;
	while(temp)
	{
	    if(temp->data == data)  //check with data
	    {
		return DATA_FOUND;
	    }
	    temp = temp->link;
	}
	return DATA_NOT_FOUND;
    }
}

