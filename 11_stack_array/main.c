#include"main.h"

int main()
{
    int choice,data,status;
    st_array *s = malloc(sizeof(st_array));     //allocate memory

    if(s == NULL)          //check the memory is allocated or not
    {
	printf("FAILURE\n");
    }
    s->s_top = -1;        //first time stack top is -1
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
		status = push(s,data);
		if(status == 1)
		{
		    printf("success\n");
		}
		if(status == 2)
		{
		    printf("stack over flow\n");
		}
		break;
		//case for pop
	    case 2:
                status = pop(s,&data);
		if(status == 1)
		{
		    printf("Success\n");
		}
		else if(status == 3)
		{
		    printf("Stack under flow\n");
		}
	       	break;
		//case for peek
	    case 3:
		status = peak(s,&data);
		if(status == 0)
		{
		    printf("LIST IS EMPTY\n");
		}
		if(status == 1)
		{
		    printf("SUCCESS\n");
		    printf("The peak value is %d\n",data);
		}

		    break;
		    
		//case for peep
	    case 4:
		printf("Enterd datas are :");
		peep(*s);
		break;
	    default:
		printf("Choose correct options\n");
	}
    }

}


