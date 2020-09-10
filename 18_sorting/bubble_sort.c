#include<stdio.h>
#include"main.h"
int bubble_sort(int arr[],int n)
{
    int i,j;
    for(i = 0; i < n;i++)
    {
	for(j = 0;j < n-1-i;j++)
	{
	    if(arr[j] > arr[j+1])
	    {
		swap(&arr[j],&arr[j+1]);
	    }
	}
    }
}

