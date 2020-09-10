#include"main.h"

int main()
{
    BST_tree *root = NULL;
    int data,op,status,height;
    system("clear");
    while(1)
    {
	printf("1.Insert\n2.Search\n3.Find max\n4.Find min\n5.print\nEnter the option :");
	scanf("%d",&op);
	system("clear");
	switch(op)
	{
	    //case for insert the elements
	    case 1:
		printf("Enter the data :");
		scanf("%d",&data);
		root = insert(root,data);
		break;
		//case for search the elemnts
	    case 2:
		printf("Enter the data to search :");
		scanf("%d",&data);
		status = BST_search(root,data);
		if(status == FOUND)
		{
		    printf("Data is founded\n");
		}
		else if(status == EMPTY)
		{
		    printf("list_EMPTY\n");
		}
		else
		    printf("Data is not founded\n");
		break;
		//case for find the max value
	    case 3:
		data = find_max(root);
		if(data == EMPTY)
		{
		    printf("LIST EMPTY\n");
		}
		else

		printf("maximum number is %d \n",data);
		break;
		//case for find the minimum value
	    case 4:
		data = find_min(root);
		if(data == EMPTY)
		{
		    printf("LIST EMPTY\n");
		}
		else
		printf("minimum data is %d \n",data);
		break;
		//case for printing the datas
	    case 5:
		printf("Enterd datas are \n");
		in_order(root);
		printf("\n");
		break;
	    default:
		printf("Error\n");
		break;
	}
    }
}

