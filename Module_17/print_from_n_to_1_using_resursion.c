#include<stdio.h>

void hello(int i,int n)
{
    if(i==n+1)
    {
        return;
    }
    hello(i+1,n);
    printf("%d\n",i);
}   
int main()
{
    int n;
    scanf("%d",&n);
    int i=1;
    hello(i,n);
    return 0;
}