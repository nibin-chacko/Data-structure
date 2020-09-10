#ifndef Hashtable
#define Hashtable
#define SIZE 10
#include<stdio.h>
#include<stdlib.h>
typedef int data_t;
typedef struct table
{
    int index;
    data_t data;
    struct table *link;
}hash_table;
enum condition
{
    SUCCESS,FAILURE,DATA_FOUND,DATA_NOT_FOUND,HASH_TABLE_DELETED
}status;
int create_table(hash_table array[]);
int delete(hash_table array[],data_t data);
int insert(hash_table array[],data_t data);
void print(hash_table array[]);
int search(hash_table array[],data_t data);
int delete_table(hash_table array[]);




#endif

