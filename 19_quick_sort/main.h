#ifndef ARRAY
#define ARRAY
 
#include<stdio.h>
#include<stdlib.h>

typedef int data_t; 
int swap(int *a,int *b);

int partition(int arr[],int first,int last);

void quick_sort(int arr[],int first,int last);
int print(int arr[],int n);
#endif
