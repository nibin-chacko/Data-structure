#include"main.h"

int swap(int *a,int *b)
{
    int temp= *a;      //assign the themp as first value
    *a = *b;
    *b = temp;
}

