#include"main.h"

int delete(hash_table array[],data_t data)
{
    int i=data%SIZE;            //find the index to delete
    if(array[i].data == -1)       //check that index any value is present or not
    {
	return DATA_NOT_FOUND;
    }
    if(array[i].data == data && array[i].link == NULL)      //assihn the deleted as -1
    {
	array[i].data = -1;
	return SUCCESS;
    }
    else if(array[i].data == data && array[i].link != NULL)   //we want to delete the array value the next that same position as next linked list
    {
	hash_table *temp = array[i].link;
	array[i].data = temp->data;
	array[i].link = temp->link;
	free(temp);
	return SUCCESS;
    }
    else
    {
	hash_table *temp = &array[i];
	while(temp != NULL)                    //to delete data in single linked list
	{
	    if(temp->link->data == data)
	    {
		hash_table *temp1 = temp->link;
		temp->link = temp1->link;
		free(temp1);
	    }
	    temp=temp->link;
	}
    }
    return DATA_NOT_FOUND;
}
