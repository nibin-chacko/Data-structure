#ifndef St_arrray
#define St_array
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
    data_t data[SIZE];     //array
    int s_top;            //for the index 
}st_array;
data_t push(st_array *s,data_t data);
data_t pop(st_array *s,data_t *data);
data_t peak(st_array *s,int *d);
void peep(st_array s);
#endif
