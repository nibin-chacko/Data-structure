/*Name :Nibin chacko
 * Date:25/02/2020
 * Description:sort the enterd nodes
 * Input: 
 *        Enterd datas are :4  5  3  9  2  1  
          1.insert_at_last
          2.insert_at_begenning
          3.Sort
          4.Print
          5.Exit
          Enter the option:3
 *Output:Enterd datas are :1  2  3  4  5  9 
 */



#include "main.h"
int main()
{
    data_type choice,status,d;
    slist *head = NULL;           //to store address of first node
    system("clear");
    while(1)
    {
	printf("1.insert_at_last\n2.insert_at_begenning\n3.Sort\n4.Print\n5.Exit\nEnter the option:");
	scanf("%d",&choice);
    system("clear");

	switch(choice)            //to select the option
	{
	    case 1:
		printf("Enterd datas are :");
		print_list(head);             //function call
		printf("Enter the data :");
		scanf("%d",&d);
		status = insert_at_last(&head,d);    //function call
		if(status == 0)
		printf("Failure\n");
		else
		    printf("Success\n");
		break;
	    case 2:
		printf("Enterd datas are :");
		print_list(head);             //function call
		printf("Enter the data :");
		scanf("%d",&d);
		status = insert_at_beg(&head,d);
		if(status == 0)
		printf("Failure\n");
		else
		    printf("Success\n");
		break;
	    case 3:
		status=sort(&head);
	        if(status == 1)
		{
		    printf("SORTING SUCCESS\n");
		    printf("After sorting :");
		    print_list(head);             //function call
		}
		else if(status == 2)
		{
		    printf("LIST IS EMPTY\n");
		}

                 break;
	   case 4:
		print_list(head);             //function call
		break;
	    case 5:
		return 1;                      //break the program
		break;
	    default:
		printf("Error\n");
	
	}
    }
}
	


