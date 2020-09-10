#include "main.h"
int main()
{
    data_type choice,status,d;
    slist *head = NULL;           //to store address of first node
    system("clear");
    while(1)
    {
	printf("1.insert_at_last\n2.remove_duplicates\n3.Print\n4.Exit\nEnter the option:");
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
		status=delete_duplicate(&head);
                break;

	   case 3:
		print_list(head);             //function call
		break;
	    case 4:
		return 1;                      //break the program
		break;
	    default:
		printf("Error\n");
	
	}
    }
}
	


