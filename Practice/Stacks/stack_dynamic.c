#include<stdio.h>
#include<stdlib.h>

int main()
{
    int MAX = 5,top = -1;
    int arr[MAX];
    for(int i=0;i<MAX;i++)
    {
        scanf("%d",arr[i]);
        top += 1;
    }
    if(top == MAX-1)
    {
        int* ptr;
        ptr = (int *)realloc(ptr,sizeof(int)*MAX*2);
        MAX = MAX*2;
    }
    
    for(int i=0;i<MAX;i++)
    {
        scanf("%d",arr[i]);
        top += 1;
    }
}