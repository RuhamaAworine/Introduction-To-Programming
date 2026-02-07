#include<stdio.h>
int main()
{
   
    int arr[4]={10,20,30,40};
    for(int i=0;i<4;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    int a[]={10,20,30,40,50};
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
     printf("\n");
    int b[6]={3,5};
    for(int i=0;i<5;i++)
    {
        printf("%d ",b[i]);
    }
     printf("\n");
    int c[6]={0};
     for(int i=0;i<5;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}