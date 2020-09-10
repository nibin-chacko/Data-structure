#include"main.h"


int main()
{
    hash_table array[SIZE];          //create the array for structure
    create_table(array);             //create table
    int status,choices,data; 
    system("clear");
    while(1)
    {
	printf("1.Insert\n2.Delete\n3.Search\n4.Print\n5.Delete_Table\n6.Exit\n");
	scanf("%d",&choices);
	system("clear");
	switch(choices)
	{
	    //case for insert
	    case 1:
		printf("Enter the data :");
		scanf("%d",&data);
		status = insert(array,data);
		if(status == SUCCESS)
		{
		    printf("INSERTION SUCCESS\n");
		}
		else
		{
		    printf("INSERTION FAILED\n");
		}
		break;
		//case for delete
	    case 2:

		print(array);
		printf("Enter the data to delete :");
		scanf("%d",&data);
		status = delete(array,data);
		if(status == DATA_NOT_FOUND)
		{
		    printf("DATA_NOT_FOUND\n");
		}
		if(status == SUCCESS)
		{
		    printf("DELETION SUCCESSFULLY\n");
		}
		break;
		//case for search
	    case 3:
		print(array);
		printf("Enter the data to search :");
		scanf("%d",&data);
		status = search(array,data);
		if(status == DATA_NOT_FOUND)
		{
		    printf("DATA_NOT_FOUND\n");
		}
		if(status == DATA_FOUND)
		{
		    printf("DATA FOUNDED\n");
		}
		break;
		//case for print
	    case 4:
		print(array);
		break;
		//case for delete table
	    case 5:
		 delete_table(array);
		break;

	    default:
		printf("ERROR\n");

	}
    }

	
	    
}

	
