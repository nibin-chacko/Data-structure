#include "main.h"
typedef int data_t;
int insert_at_last1(slist1 **head1,data_type data)

{
    slist1 (*new1) = malloc(sizeof(slist1));

    if(new1 == NULL)
    {
	return FAILURE;
    }
    new1->data1=data;
    new1->link1=NULL;

    if((*head1) == NULL)
    {
	(*head1) = new1;
	return SUCCESS;
    }
    slist1 *temp = *head1;
    while(temp->link1 != NULL)
    {
	temp=temp->link1;
    }
    temp->link1=new1;
//    sort1(head1);
    return SUCCESS;
}
