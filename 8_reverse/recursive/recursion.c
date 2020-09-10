#include"main.h"


int rec_rev(slist **head,slist **update)
{

    //validation for empty or not
    if(*head == NULL)
	return LIST_EMPTY;



    slist *temp = *head;

    //to traverse the node
    if (temp -> link)
    {
	temp = temp -> link;
    }
    else
    {
	// updating node to point to last node
	*update = temp;

	return 0;
    }
    //calling recursively
    rec_rev(&temp,update);
    //updating connection
    temp -> link = *head;
    (*head) -> link = NULL;

    return SUCCESS;

}


