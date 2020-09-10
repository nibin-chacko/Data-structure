#include"main.h"

void print(hash_table array[])
{
    int i = 0;
    for(i = 0;i < SIZE;i++)
    {
//	printf("%d->%d\n",i,array[i].data);
	if(array[i].link != NULL)
	{
	    hash_table *temp = &array[i];
	    while(temp != NULL)
	    {
		printf("%d->%d\t",i,temp->data);
		temp = temp->link;
	    }
	    printf("\n");
	}
    }
}

