#include"main.h"
data_type insert_at_beg(slist **head,data_type d)
{
   slist *new=malloc(sizeof(slist));         //allocated memory for new node
   if(new == NULL)
   {
      return FAILURE;
   }
   else
   { 
   new->data=d;                            //store the data
    new->link=*head;                       //store the address of head
    *head=new;                            //store the new address to head 
       return SUCCESS;
   }
}

