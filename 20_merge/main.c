#include<stdio.h>

void merge_sort(int a[],int first,int last);
void merge(int arr[],int first,int mid,int last);
void print(int arr[],int n);
int main()
{
    int n,i;
    printf("Enter the size of arrya :");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elemnts :");
    for(i = 0;i < n;i++)
    {
	scanf("%d",&a[i]);
    }
    merge_sort(a,0,n);
    print(a,n);
}
void merge_sort(int a[],int first,int last)
{
    if(first < last)
    {
	int mid = (first + last)/2;
	merge_sort(a,first,mid);
	merge_sort(a,mid+1,last);
	merge(a,first,mid,last);
    }
}
	
void merge(int arr[],int first,int mid,int last)
{
    int s1,s2,i,k,j;
    s1 = mid - first + 2;
    s2 = last - mid + 1;
    int l_a[s1],r_a[s2];
    for(i = 0;i < s1;i++)
    {
	l_a[i] = arr[first+i];
    }
    for(j = 0;j < s2;j++)
    {
	r_a[j] = arr[mid + 1 + j];
    }
    l_a[i] = 100000000;
    r_a[j] = 100000000;
for(k = 0;k < (s1+s2);k++)
{
    if(l_a[i] < r_a[j])
    {
	arr[k] = l_a[i];
	i++;
    }
    else
    {
	arr[k] = r_a[j];
	j++;
    }
}
}
void print(int arr[],int n)
{
    for(int i = 0;i < n;i++)
    {
	printf("%d \t",arr[i]);
    }
    printf("\n");
}

