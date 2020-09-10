#include "main.h"
int main()
{
    data_type choice,status,d;
    slist *head = NULL;           //to store address of first node
    slist1 *head1 = NULL;
    system("clear");
    while(1)
    {
	printf("1.insert_last_at_first_node\n2.insert_last_at_second_node\n3.Merge_2_nodes\n4.Print\n5.Exit\nEnter the option:");
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
		printf("Enter the data :");
		scanf("%d",&d);
		status = insert_at_last1(&head1,d);    //function call
		if(status == 0)
		printf("Failure\n");
		else
		    printf("Success\n");
		break;
	    case 3:
		status=merge(&head,&head1);
		if(status == 1)
		{
		    printf("Merge successfully\n");
		    print_list(head);             //function call
		}
		else if(status == 2)
		{
		    printf("List 1 Empty\n");
		}
		else if(status == 3)
		{
		    printf("List 2 Empty\n");
		}
		break;
	   	   case 4:
		printf("Fist node datas are :");
		print_list(head);             //function call
		printf("Second node datas are :");
		print_list1(head1);             //function call

		break;
	    case 5:
		return 1;
		break;
	    default:
		printf("Error\n");
	
	}
    }
}
	


