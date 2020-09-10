#include"main.h"
int binary_search_recursive(int arr[],int search,int first,int last)
{
    int m;
    if(first <= last)            //check the first is less than last
    {
	m = (first+last)/2;
	if(arr[m] == search)        //check the data same or not
	{
	    return DATA_FOUND;
	}
	else if(search > arr[m])
	{
	    first= m + 1;
	    binary_search_recursive(arr,search,first,last);    //function call recursion
	}
	else if(search < arr[m])
	{
	    last =m - 1;
	    binary_search_recursive(arr,search,first,last);    //function call recursion
	}

    }
}

