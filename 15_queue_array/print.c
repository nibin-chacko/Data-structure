#include "main.h"

void print(q_array q)
{

    if(q.front == -1)
    {
	printf("-------------------List is Empty---------------\n");
    }
    else
    {
	printf("Enterd datas are :");
    while(q.front != SIZE)
    {
	printf("%d ",q.data[q.front]);
	q.front++;
    }
    }
    printf("\n");
}
