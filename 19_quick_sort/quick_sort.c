#include"main.h"
void quick_sort(int *arr,int first,int last)
{
     if(first < last)    //check the condition
      {
	    int pi = partition(arr,first,last);     //call the function
		    quick_sort(arr,first,pi-1);      //call the function
		    quick_sort(arr,pi+1,last);       //call the function
       }
 }
          
