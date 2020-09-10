/*NAME:NIBIN CHACKO
 *DATE:01/03/2020
  DESCRIPTION:BINARY SEARCH
  INPUT:
OUTPUT:
*/


#include"main.h"


int main()
{
    system("clear");
    printf("Enter the size of array :");
    int n,i,choice,status,search,f,l;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d elements :",n);
    for(i = 0;i < n;i++)          //store the datas in array
    {
	scanf("%d",&arr[i]);
    }
    system("clear");
    while(1)
    {
    printf("SELECT THE OPTION\n1.Binary_iterative\n2.Binary_recursive\n3.Exit\n");
    scanf("%d",&choice);
    system("clear");
    switch(choice)
    {                                              //case for binary search itrative
	case 1:
	    printf("Enter the search element :");
	    scanf("%d",&search);
	    status = binary_search(arr,search,n);         //call function
	    if(status == 0)
	    {
		printf("DATA_NOT_FOUND\n");
	    }
	    else
		printf("DATA_FOUND\n");
	    break;
	case 2:                        //case for binary search recursive
	    sort(arr,n);
/*	    for(i = 0;i < n;i++)
	    {
		printf("%d \n",arr[i]);
	    }*/
	    f = 0,l = n;

	    printf("Enter the search element :");
	    scanf("%d",&search);
	    status = binary_search_recursive(arr,search,f,l);        //call function
	    if(status == DATA_FOUND)
	    {
		printf("DATA_FOUND\n");
	    }
	    else
	    {
		printf("DATA_NOT_FOUND\n");
	    }
	    break;
	case 3:                     //case for exit
	    return 0;
	    break;
	default:
	    printf("Choose the correct opption\n");
    }
    }
}


