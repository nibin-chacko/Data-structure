#include"main.h"

int partition(int arr[],int first,int last)
{
    int pivot = arr[last];       //assign the pivot value as last of the array
    int i,pi = first;
    for(i = first;i < last;i++)
    {
	if(arr[i] < pivot)        //check the condition
	{
	    swap(&arr[i],&arr[pi]);     //swap the data
	    pi++;
	}
    }
    swap(&arr[i],&arr[pi]);        //swap the last and pi pointing 
    return pi;
}
