#include "main.h"
int main()
{
    data_type choice,status,d;
    slist *head = NULL;           //to store address of first node
    system("clear");
    while(1)
    {
	printf("1.insert_at_last\n2.insert_at_begenning\n3.Delete_first\n4.Delete_last\n5.Find_node\n6.Print\n7.Exit\nEnter the option:");
	scanf("%d",&choice);
    system("clear");

	switch(choice)            //to select the option
	{
	    case 1:
		printf("Enter the data :");
		scanf("%d",&d);
		status = insert_at_last(&head,d);    //function call
		if(status == 0)
		printf("Failure\n");
		else
		    printf("Success\n");
		break;
	    case 2:
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
		print_list(head);             //function call
		status = delete_first(&head);
		if(status == 0)
		    printf("SUCCESS\n");
		if(status == 2)
		    printf("LIST IS EMPTY\n");
                 break;
	    case 4:
		print_list(head);             //function call
		status = delete_last(&head);
		if(status == 0)
		    printf("SUCCESS\n");
		 if(status == 2)
		    printf("LIST IS EMPTY\n");
                 break;

	   case 5:
		print_list(head);             //function call
		 printf("Enter the data :");
		 scanf("%d",&d);
		 status = find_node(&head,d);
		 if(status == 0)
		 {
		     printf("DATA NOT FOUND\n");
		 }
		 else if(status)
		 {
		     printf("The %d is in %dnd position\n",d,status);
		 }

		 break;
	   case 6:
		print_list(head);             //function call
		break;
	    case 7:
		return 1;                      //break the program
		break;
	    default:
		printf("Error\n");
	
	}
    }
}
	


