#include"main.h"
data_type insert_at_beg(dlist **head,data_type d)
{
   dlist *new=malloc(sizeof(dlist));         //allocated memory for new node
   if(new == NULL)
   {
      return FAILURE;
   }
   else
   { 
   new->data=d;                            //store the data
    new->next=*head;                       //store the address of head
    new->prev=NULL;
    *head=new;                            //store the new address to head 
       return SUCCESS;
   }
}

