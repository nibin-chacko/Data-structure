#include"main.h"
#include<stdlib.h>
int main()
{
    char ch;
    do
    {
	system("clear");
    int n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int array[n];         //declaring array
    int first = 0,last = n;
    printf("Enter the data \n");
    for(int i = 0;i < n;i++)       //entering values
    {
	printf("%d->",i);
	scanf("%d",&array[i]);
    }
    merge_sort(array,0,sizeof(array)/sizeof(int)-1);        //calling merge sort function
    printf("After sorting\n");
    for(int  i = 0;i < n;i++)           //printing the sorted array
    {
	printf("%d ",array[i]);
    }
    printf("\n");
    getchar();
    printf("Do you want to continue yes[y] or no[n] \n");
    scanf("%c",&ch);
    }
    while(ch == 'y');
}

