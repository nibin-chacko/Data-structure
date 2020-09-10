#include"main.h"

int main()
{
    data_type choise,status,data;
    slist *head = NULL;
	system("clear");
    while(1)
    {
	printf("1.insert at last\n2.recursion itrative\n3.Exit\nEnter the choise:");
	scanf("%d",&choise);
	system("clear");
	switch(choise)
	{
	    case 1:
		printf("Enter the data :");
		scanf("%d",&data);
		status = insert_at_last(&head,data);
		if(status == FAILURE)
		{
		    printf("------------------FAILURE------------------\n");
		}
		else
		    
		    printf("------------------SUCCESS------------------\n");
		break;
	    case 2:
		status =reverse_itrative(&head);
		if (status == LIST_EMPTY)
		{
		    puts("______________LIST_EMPTY______________________\n");
		}
		if (status == FAILURE )
		{
		    puts("_____give minimum two node to perform operation________ \n");
		}
		if (status == SUCCESS)
		{
		    puts("_____________successfully reversed the list__________________________\n ");

		    print_list(head);//calling
		}
		break;
	    case 3:
		return 1;
		break;
	}
    }
}
