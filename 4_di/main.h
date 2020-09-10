#ifndef Dlist
#define Dlist
#define FAILURE 0
#define SUCCESS 1
#define LIST_EMPTY 2
#define DATA_NOT_FOUND 3
#define NO_SUCH_SPACE 4
#include<stdio.h>
#include<stdlib.h>
typedef int data_type;
typedef struct node
{
    data_type data;
    struct node *next,*prev;
}dlist;
//function prototypes
data_type options(void);
data_type insert_at_last(dlist **head,data_type data);
data_type insert_after(dlist **head,data_type,data_type);
data_type insert_before(dlist **head,data_type,data_type);
data_type delete_element(dlist **head,data_type);
data_type insert_at_beg(dlist **head,data_type);
void print_list(dlist *head);
#endif
