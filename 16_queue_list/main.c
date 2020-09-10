#include"main.h"

int main()
{
    slist *front = NULL;      //assign front and rear are null
    slist *rear = NULL;
   int choice,status,d;
   system("clear");
   while(1)
   {
       print(front);
       printf("1.Enqueue\n2.Dequeue\n3.print\nEnter the option:");
       scanf("%d",&choice);
      system("clear");
       switch(choice)
       {
	   //case for enqueue
	   case 1:
	       printf("Enter the data :");
	       scanf("%d",&d);
	       status = insert(&front,&rear,d);  //function call
	       if(status == 0)
	       printf("Failure\n");
	       else
		   printf("Success\n");
	       break;
	       //case for dequeue
	   case 2:
	       status = dequeue(&front,&rear);    //function call
	       if(status == 1)
		   printf("Success\n");

	       break;
	       //case for print
	   case 3:
	       print(front);  //call function
	       break;
	   default:
	       printf("ERROR\n");
       }
   }
}
