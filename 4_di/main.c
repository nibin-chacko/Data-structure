/*NAME:NIBIN CHACKO
 * DATE:23/2/2020
 * DESCRIPTION:
 * INPUT:1.insert_at_last
         2.insert_after
         3.insert_before
         4.delete element
         5.Print
         6.Exit
         Enter the option:
 *OUTPUT:
 */

#include "main.h"
int main()
{
    data_type choice,status,d,d1;
    dlist *head = NULL;           //to store address of first node
    system("clear");
    while(1)
    {
	choice = options();
        system("clear");
	switch(choice)            //to select the option
	{
	    //insert last
	    case 1:
		printf("Enter the data :");
		scanf("%d",&d);
		status = insert_at_last(&head,d);    //function call
		if(status == 0)
		printf("Failure\n");
		else
		    printf("Success\n");
		break;
		//insert after
	    case 2:
		printf("Enter the new data :");
		scanf("%d",&d);
		printf("Enter the node data :");
		scanf("%d",&d1);
		status = insert_after(&head,d,d1);         //function call
		if(status == 0)
		printf("Failure\n");
		else if(status == 1)
		    printf("Success\n");
		else if(status == 2)
		    printf("LIST EMPTY\n");
		else if(status == 3)
		    printf("DATA NOT FOUND\n");
		break;
		//insert before
	    case 3:
		printf("Enter the new data :");
		scanf("%d",&d);
		printf("Enter the node data :");
		scanf("%d",&d1);
		status = insert_before(&head,d,d1);                //function call
		if(status == 0)
		printf("Failure\n");
		else if(status == 1)
		    printf("Success\n");
		else if(status == 2)
		    printf("LIST EMPTY\n");
		else if(status == 3)
		    printf("DATA NOT FOUND\n");
		break;
		//delete element
	    case 4:
		printf("Enter the data to delete :");
		scanf("%d",&d);
		status = delete_element(&head,d);
		if(status == 0)
		    printf("SUCCESS\n");
		 if(status == 2)
		    printf("LIST IS EMPTY\n");
                 break;

	   case 5:
		print_list(head);             //function call
		break;
	    case 6:
		return 1;                      //break the program
		break;
	    default:
		printf("Error\n");
	
	}
    }
}
	


