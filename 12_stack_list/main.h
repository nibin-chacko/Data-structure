#ifndef Dlist
#define Dlist
#define FAILURE 0
#define SUCCESS 1
#define STACK_OVERFLOW 2
#define STACK_UNDERFLOW 3
#define SIZE 5
#include<stdio.h>
#include<stdlib.h>
typedef int data_t;
typedef struct stack
{
    data_t data;     //array
    struct stack *next,*prev;            //for the index 
}dlist;
int push(dlist **head,dlist **s_top,data_t data);
void peep(dlist *head,dlist *s_top);
int pop(dlist **head,dlist **tail);

#endif
