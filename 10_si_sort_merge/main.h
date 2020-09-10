#ifndef Slist
#define Slist
#define FAILURE 0
#define SUCCESS 1
#define LIST_EMPTY 2
#define LIST_EMPTY1 3
#include<stdio.h>
#include<stdlib.h>
typedef int data_type;
typedef struct node
{
    data_type data;
    struct node *link;
}slist;
typedef struct node1
{
    data_type data1;
    struct node1 *link1;
}slist1;
//function prototypes
data_type insert_at_last(slist **head,data_type data);
data_type insert_at_last1(slist1 **head1,data_type data);
data_type sort(slist **head);
data_type sort1(slist1 **head1);
int merge(slist **head1,slist1 **head2);
void print_list(slist *head);
void print_list1(slist1 *head1);
#endif
