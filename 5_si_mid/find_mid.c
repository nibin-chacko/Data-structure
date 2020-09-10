#include"main.h"



int find_mid(slist *head)
{
    int n=0,d=0,m=0;
    slist *temp;
    temp = head;   //store the value of head
    if(temp == NULL)
    {
	return FAILURE;
    }
    while(temp != NULL)   //check the condition of link is null or not
    {
	n++;                       //count increase
	temp=temp->link;        //assigning new node address
    }
    temp = (slist *)head;
    m = ((n+1)/2);               //find the middle value
    while(temp->data != 0)
    {
	d++;
	if(d == m)                  //check the d and m ara same
	{
	    return temp->data;      //return the data
	}
	temp = temp->link;         //assign new address
    }

}
 
