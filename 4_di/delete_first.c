#include"main.h"
data_type delete_first(dlist **head)
{
    if(*head == NULL)
    {
	return LIST_EMPTY;
    }
    dlist *temp = *head;
    *head = temp->next;
    (*head)->prev = NULL;
    free(temp);
    return SUCCESS;
}
