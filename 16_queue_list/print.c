#include"main.h"

void print(slist *front)
{
    if(front == NULL)
    {
	printf("LIST EMPTY\n");
    }
    slist *temp = front;
    printf("Enterd datas are :");
    while(temp != NULL)
    {
	printf("%d ",temp->data);
	temp = temp->link;
    }
    printf("\n");
}
