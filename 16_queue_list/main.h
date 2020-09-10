#ifndef Slist
#define Slist
#define FAILURE 0
#define SUCCESS 1
#define LIST_EMPTY 2
#include<stdio.h>
#include<stdlib.h>
typedef int data_type;
typedef struct node
{
    data_type data;
    struct node *link;
}slist;
//function prototypes
data_type insert(slist **front,slist **rear,data_type data);
data_type dequeue(slist **front,slist **rear);
void print(slist *front);
#endif
