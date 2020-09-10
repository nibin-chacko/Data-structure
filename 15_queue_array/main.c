#include "main.h"

int main()
{
   int choice,data,status;
    q_array *Q = malloc(sizeof(q_array));   //memory allocation
    Q->front = -1;   //intiliaze firt values
    Q->rear = -1;
    system("clear");   //for clear the screen
  while(1)
  {
     print(*Q);    //function call for print
     printf("---------------\n1.Enqueue\n2.Dequeue\n3.Print\n4.Exit\n---------------\nEnter the option :");
    scanf("%d",&choice);
    system("clear");

   switch(choice)
   {
       case 1:
	  printf("Enter the data :");
	 scanf("%d",&data);
	status = enq(Q,data);    //function call for enqueu
	 if(status == 2)
	 {
	     printf("---------------Q_full---------------\n");
	 }
	 else if(status == 1)
	 {
	     printf("---------------Success---------------\n");
	 }
	break;
       case 2:
	status = deq(Q,&data);   //function call for dequeu
	if(status == 1)
	{
	    printf("---------------Success---------------\n");
	}
	else
	    printf("---------------List is Empty---------------\n");
	break;
       case 3:
           print(*Q);    //function call for print
	break;
       case 4:
	return 0;
   }
  }
}
