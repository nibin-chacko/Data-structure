#include "main.h"
#include<stdio.h>
int main()
{
    system("clear");
    int size,status,choice;
    while(1)
    {
	printf("1.Sorting\n2.exit\nEnter the choice:");
	scanf("%d",&choice);
	switch(choice)
	{
	    case 1:
		{
                 printf("Enter the size of arrray :");
                 scanf("%d",&size);
                 int arr[size];
                 printf("Enter the elements :");
                 for(int i = 0 ;i < size;i++)   //loop for storing the values
                  {
	           printf("\n%d -> ",i+1);
	           scanf("%d",&arr[i]);
                  }
                 printf("\n");
                 printf("Enterd elements are :");
                 print(arr,size);               //print the list
                 printf("\n");
                 quick_sort(arr,0,(size-1));     //call the function
                 printf("After sorting :");
                 print(arr,size);               //print the list
                 printf("\n");
                 break;
		}
	    case 2:
		return 0;
		default:
		printf("Error\n");
	    }
    }
    return 0;

}
