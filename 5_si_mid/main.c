/*Name:Nibin chacko
 * Date:23/2/2020
 * Description:To find the middle of the node
 * Input:1.insert_at_last
         2.middile
         3.Print
         4.Exit
         Enter the option:3
	 Enterd datas are :10  20  30  40  50
 *OUTPUT:The mid Element is 30
 */
#include "main.h"
int main()
{
    data_type choice,status,d,p;
    slist *head = NULL;           //to store address of first node
    system("clear");
    while(1)
    {
	printf("1.insert_at_last\n2.middile\n3.get_nth_last\n4.Print\n5.Exit\nEnter the option:");
	scanf("%d",&choice);
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
		//find the middle
	    case 2:
		print_list(head);             //function call
		status = find_mid(head);
		//printf("THe mid is %d\n",status);
		if(status == 0)
		   {
		       printf("Failure\n");
		   }
		else
		printf("The mid Element is %d\n",status);

		break;
	    case 3:
		print_list(head);             //function call
		printf("Enter the position :");
		scanf("%d",&p);
		status = get_nth_last(&head,p);
		if(status == 0)
		{
		    printf("Failure\n");
		}
		else
		{
		    printf("The nth last is %d\n",status);
		}
		break;
		//print the data
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
	


