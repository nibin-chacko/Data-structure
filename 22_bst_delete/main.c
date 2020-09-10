#include"main.h"

int main()
{
    BST_tree *root = NULL;
    int data,op,status,height;
    system("clear");
    while(1)
    {
	printf("1.Insert\n2.Delete Node\n3.print\nEnter the option :");
	scanf("%d",&op);
	system("clear");
	switch(op)
	{
	    case 1:
		printf("Enter the data :");
		scanf("%d",&data);
		root = insert(root,data);
		break;
	    case 2:
		printf("Enter the data to delete :");
		scanf("%d",&data);
                root = delete(root,data);
		if(root == NULL)
		{
		    printf("List is empty\n");
		}
		break;
	    case 3:
		in_order(root);
		break;
	    default:
		printf("Error\n");
		break;
	}
    }
}

