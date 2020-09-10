#include<stdio.h>
#include"main.h"
void insertion_sort ( int a[ ] , int n)
{
     for( int i = 0 ;i < n ; i++ ) 
     {
    /*storing current element whose left side is checked for its
             correct position .*/

      int temp = a[ i ];
      int j = i;

       /* check whether the adjacent element in left side is greater or
            less than the current element. */

          while(  j > 0  && temp < a[ j -1])
	  {

           // moving the left side element to one position forward.
                a[ j ] = a[ j-1];
                j= j - 1;

           }
         // moving current element to its  correct position.
           a[ j ] = temp;
     }
}
