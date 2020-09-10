#include"main.h"

int main()
{
    int choice,data,status;
    dlist *s_top = NULL;        //first time stack top is -1
   dlist *head = NULL;
    system("clear");
    while(1)
    {
	printf("1.PUSH\n2.POP\n3.PEAK\n4.PEEP\nEnter the choice :");
	scanf("%d",&choice);
      system("clear");
	switch(choice)
	{
	    //case for push
	    case 1:
		printf("Enter the data :");
		scanf("%d",&data);
		status = push(&head,&s_top,data);
		if(status == 1)
		{
		    printf("\nsuccess\n");
		}
		if(status == 2)
		{
		    printf("\nstack over flow\n");
		}
		break;
		//case for pop
	    case 2:
                status = pop(&head,&s_top);
		if(status == 1)
		{
		    printf("\nSuccess\n");
		}
		else if(status == 3)
		{
		    printf("\nStack under flow\n");
		}
	       	break;
		//case for peek
	    case 3:
		status = peak(s_top,&data);
		if(status == 0)
		{
		    printf("LIST IS EMPTY\n");
		}
		if(status = 1)
		{
		    printf("SUCCESS\n");
		    printf("The peak value is %d\n",data);
		}

		    break;
		    
		//case for peep
	    case 4:
		printf("Enterd datas are :");
		peep(head,s_top);
		break;
	    default:
		printf("Choose correct options\n");
	}
    }

}


