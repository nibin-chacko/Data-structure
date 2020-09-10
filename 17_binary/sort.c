#include "main.h"

int sort(int *arr,int n)              
{
    int temp,i,j;
    for(i = 0;i < n;i++)
    {
	for(j = 0;j < n;j++)
	{
	    if(*(arr+i) < *(arr+j))
	    {
		temp = *(arr+i);
		*(arr+i) = *(arr+j);
		*(arr+j) = temp;
	    }
	}
    }
}
