#ifndef Dlist
#define Dlist
#define FAILURE 0
#define SUCCESS 1
#define LIST_EMPTY 2
#include<stdio.h>
#include<stdlib.h>
typedef int data_type;
typedef struct node
{
    data_type data;
    struct node *next,*prev;
}dlist;
//function prototypes
data_type insert_at_last(dlist **head,dlist **tail,data_type data);
data_type insert_at_beg(dlist **head,dlist **tail,data_type d);
void print_from_first(dlist *head);
void print_from_last(dlist *tail);
data_type delete_first(dlist **head,dlist **tail);
data_type delete_last(dlist **head,dlist **tail);
#endif
