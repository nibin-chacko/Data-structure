#include"main.h"

data_t enq(q_array *Q,data_t data)
{
    if(Q->rear == (SIZE - 1))  //check the queue full or not
    {
	return Q_FULL;
    }
    if(Q->rear == -1)      //adding the first element we need to increase the front only one time
    {
	Q->front++;
    }
    Q->rear++;                //increment the rear 
    Q->data[Q->rear] = data;   //adding data
    return SUCCESS;
}

