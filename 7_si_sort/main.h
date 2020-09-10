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
data_type insert_at_last(slist **head,data_type data);
data_type insert_at_beg(slist **head,data_type d);
void print_list(slist *head);
data_type sort(slist **head);
#endif
