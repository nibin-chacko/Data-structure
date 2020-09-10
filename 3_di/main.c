/*Name :Nibin chacko
 *Date :21/2/2020
  Description:
  Input:
  Output:
  */
#include "main.h"
int main()
{
    data_type choice,status,d;
    dlist *head = NULL,*tail = NULL;           //to store address of first node
    system("clear");
    while(1)
    {
	printf("1.insert_at_last\n2.insert_at_begenning\n3.Delete_first\n4.Delete_last\n5.print_from_first\n6.Print_from_last\n7.Exit\nEnter the option:");
	scanf("%d",&choice);
    system("clear");

	switch(choice)            //to select the option
	{
	    case 1:
		printf("Enter the data :");
		scanf("%d",&d);
		status = insert_at_last(&head,&tail,d);    //function call
		if(status == 0)
		printf("Failure\n");
		else
		    printf("Success\n");
		break;
		//case for insert at beggining
	    case 2:
		 print_from_first(head);
		printf("Enter the data :");
		scanf("%d",&d);
		status = insert_at_beg(&head,&tail,d);
		if(status == 0)
		printf("Failure\n");
		else
		    printf("Success\n");
		break;
		//case for delete first
	    case 3:
		 print_from_first(head);
		status = delete_first(&head,&tail);
		if(status == 0)
		    printf("SUCCESS\n");
		if(status == 2)
		    printf("LIST IS EMPTY\n");
                 break;
		 //case for delete last
	    case 4:
		 print_from_first(head);
		status = delete_last(&head,&tail);
		if(status == 0)
		    printf("SUCCESS\n");
		 if(status == 2)
		    printf("LIST IS EMPTY\n");
                 break;
		 //case for print from first

	   case 5:
		 print_from_first(head);

		 break;
		 //case for print from last
	   case 6:
		print_from_last(tail);             //function call
		break;
	    case 7:
		return 1;                      //break the program
		break;
	    default:
		printf("Error\n");
	
	}
    }
}
	


