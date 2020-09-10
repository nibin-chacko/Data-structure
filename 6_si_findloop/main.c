#include "main.h"
int main()
{
    data_type choice,status,d;
    slist *head = NULL;           //to store address of first node
    system("clear");
    while(1)
    {
	printf("1.insert_sorted\n2.create loop\n3.Find loop\n4.print\n5.Exit\nEnter the option:");
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
		//create loop
	    case 2:
		printf("Enter the data :");
		scanf("%d",&d);
		status = create_loop(&head,d);
		if(status == 1)
		{
		    printf("LOOP CREATED\n");
		}
		else if(status == 2)
		{
		    printf("LIST IS EMPTY\n");
		}
		else if(status == 3)
		{
		    printf("Enterd data is not found\n");
		}   
		break;
		//find loop
	    case 3:
		status = find_loop(head);
		if(status == 2)
		{
		    printf("LIST IS EMPTY\n");
		}
		else if(status == 4)
		{
		    printf("LOOP IS FINDED\n");
		}
		else if(status == 5)
		{
		    printf("LOOP IS NOT FOUNDED\n");
		}
                 break;
		 //print
	   case 4:
		print_list(head);             //function call
		break;
		//exit
	    case 5:
		return 1;                      //break the program
		break;
	    default:
		printf("Error\n");
	
	}
    }
}
	


