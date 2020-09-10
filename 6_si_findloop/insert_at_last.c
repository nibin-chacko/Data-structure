#include "main.h"
int insert_at_last(slist **head,data_type data)
{
    slist *new = malloc(sizeof(slist));

    if(new == NULL)
    {
	return FAILURE;
    }
    new->data=data;     //assign the datas
    new->link=NULL;      

    if(*head == NULL)
    {
	*head = new;
	return SUCCESS;
    }
    slist *temp = *head;  //assign temp as head
    while(temp->link != NULL)  //transverse
    {
	temp=temp->link;
    }
    temp->link=new;     //assign  the last link addres as new address
    sort(head);                //for sorting
    return SUCCESS;
}
