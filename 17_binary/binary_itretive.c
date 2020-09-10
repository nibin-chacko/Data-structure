#include"main.h"

int binary_search(int arr[],int search,int size)
{
    int f = 0;           //initialize first and last
    int l = size -1;
    int m;
    while(f <= l)
    {
	m = (f+l)/2;        //take teh mid of the array
	if(arr[m] == search)    //check the data same or not
	{
	    return DATA_FOUND;
	}
	else if(search > arr[m])        //check the data greater than the middle element
	   f = m + 1;
	else
	    l = m - 1;
    }
    return DATA_NOT_FOUND;
}
