#include"main.h"
data_type insert_at_beg(dlist **head,dlist **tail,data_type d)
{
   dlist *new=malloc(sizeof(dlist));         //allocated memory for new node
   if(new == NULL)
   {
      return FAILURE;
   }

    dlist *temp = (*head)->next;
    new->data=d;                            //store the data
    new->prev=NULL;    //store the address of head
    new->next=*head;
   if(*tail == NULL)
   {
       *tail = *head = new;
       return SUCCESS;
   }
    (*head)->prev = new;
    *head = new;   
    return SUCCESS;
}


