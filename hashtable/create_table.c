#include"main.h"

int create_table(hash_table array[])
{
    int i = 0;
    for( i = 0 ;i < SIZE;i++)
    {
	array[i].index = i;       //assign the index value
	array[i].data = -1;         //first all data initializes as -1
	array[i].link = NULL;         //link asign as null
    }
}

