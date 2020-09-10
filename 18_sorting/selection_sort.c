#include<stdio.h>
#include"main.h"
void selection_sort(int arr[],int n)
{
    int i,j;
    int s_i = 0;
    for(int i = 0;i < n -1;i++)
    {
	s_i = i;
	for(j = i+1;j < n;j++)
	{
	    if(arr[j] < arr[s_i])    //find the index of the minimum value 
	    {
		s_i = j;
		swap(&arr[i],&arr[s_i]); //swap with first and minimumindex
	    }
	}
    }
}
