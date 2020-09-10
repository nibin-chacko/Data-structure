#ifndef Slist
#define Slist
#include<stdio.h>
#include<stdlib.h>

typedef int data_type;
typedef struct node
{
    data_type data;
    struct node *link;
}slist;
enum conditions
{
    FAILURE,SUCCESS,LIST_EMPTY
}status;
void print_list(slist *head);
int insert_at_last(slist **head,data_type data);
int rec_rev(slist **head,slist **update);

#endif
