#include"main.h"
data_type delete_first(slist **head)
{
    if(*head == NULL)
    {
	return LIST_EMPTY;
    }
    slist *temp = *head;
    *head = temp->link;
    free(temp);
    return SUCCESS;
}
