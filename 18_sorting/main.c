#include<stdio.h>
#include<stdlib.h>
#include"main.h"
int main()
{
    system("clear");
    int size,i,choices;
    while(1)
    {
    printf("Enter the size of array :");
    scanf("%d",&size);              //scan the size of array
    int arr[size];
    printf("Enter the elements in array\n");
    for(i = 0;i < size;i++)               //loop for entering the elements
    {

	printf("%d->",i+1);
	scanf("%d",&arr[i]);
    }
    printf("\n");
    printf("1.Bubble sort\n2.Selection sort\n3.Insertion sort\n");
    scanf("%d",&choices);                //scan the choices
    system("clear");
    switch(choices)
    {
	case 1:
	    printf("Enterd datas are :");
	    print_list(arr,size);
	    bubble_sort(arr,size);         //call the functions
	    printf("After sorting :");
	    print_list(arr,size);
	    break;
	case 2:
	    printf("Enterd datas are :");
	    print_list(arr,size);
	    selection_sort(arr,size);
	    printf("After sorting :");
	    print_list(arr,size);
            break;
	case 3:
	    printf("Enterd datas are :");
	    print_list(arr,size);
	    insertion_sort(arr,size);
	    printf("After sorting :");
	    print_list(arr,size);
	    break;


	default:
	    printf("Error\n");
    }
    }
}



