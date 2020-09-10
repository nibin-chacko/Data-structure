#include"main.h"



int delete_table(hash_table array[])
{
    int i =0;
    for(i = 0;i < SIZE;i++)
    {
	array[i].data == -1;
	hash_table *temp = array[i].link;
	hash_table *temp1 = temp;
	while (temp)
	{
	    temp1 = temp;
	    temp = temp->link;
	    free(temp1);
	}
	array[i].link = NULL;
    }
}
