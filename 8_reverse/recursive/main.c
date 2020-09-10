#include"main.h"

int main()
{
    data_type choise,status,data;
    slist *head = NULL;
    slist *update = NULL;
	system("clear");
    while(1)
    {
	printf("1.insert at last\n2.recursion itrative\nEnter the choise:");
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
		update = head;
		status =rec_rev(&head,&update);
		if(status == LIST_EMPTY)
		{
		    printf("________________FAILURE________________\n");
		}
		if(status == SUCCESS )
		{
		    printf("___________________________SUCCESS_______________________\n");
	         print_list(update);//calling
		}
		
		break;
	}
    }
}
