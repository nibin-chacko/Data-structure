#include "main.h"

data_t deq(q_array *Q,data_t *d)
{
    if(Q->front == -1)        //check gthe list is empty or not
    {
	return Q_EMPTY;
    }
    *d = Q->data[Q->front];         //get the data
    Q->front++;                    //increment the position
    if(Q->front > Q->rear)          //check the size
    {
	Q->front = Q->rear = -1;
    }
    return SUCCESS;
}
