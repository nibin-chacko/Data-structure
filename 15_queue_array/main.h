#ifndef Q_array
#define Q_array
#define FAILURE 0
#define SUCCESS 1
#define Q_FULL 2
#define Q_EMPTY 3
#define SIZE 5
#include<stdio.h>
#include<stdlib.h>
typedef int data_t;
typedef struct Q
{
    data_t data[SIZE];
    int front,rear;
}q_array;
data_t enq(q_array *Q,data_t data);
data_t deq(q_array *Q,data_t *t);
void print(q_array q);
#endif
