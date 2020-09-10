#include"main.h"
 void merge(int array[],int first,int mid,int last)
  {
      int s1,s2,i,j,k;
      s1 = mid-first+2;
      s2 = last-mid+1;
      int l_a[s1],r_a[s2];
      for(i = 0;i < s1-1;i++)       //creating left array
      {
         l_a[i] = array[i+first];
      }
     for(j = 0;j < s2-1;j++)     //creating rigt array
      {
          r_a[j] = array[mid+1+j];
      }
      l_a[i] = INT_MAX;
      r_a[j] = INT_MAX;
      i = j = 0;
     for(k = first;(i+j) < s1+s2-2;k++)    //sorting the array
      {
          if(l_a[i] < r_a[j])
         {
              array[k] = l_a[i];
              i++;
          }
          else
          {
              array[k] = r_a[j];
              j++;
          }
      }
  }

