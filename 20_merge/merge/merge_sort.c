#include"main.h" 

void merge_sort(int array[],int first,int last)
 {
     if(first < last)
     {
         int mid = (first + last)/2;
         merge_sort(array,first,mid);
         merge_sort(array,(mid+1),last);
         merge(array,first,mid,last);
     }
}

