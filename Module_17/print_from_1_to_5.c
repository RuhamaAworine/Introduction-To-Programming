#include<stdio.h>

void hello(int i,int n)
{
    if(i==n+1)
    {
        return;
    }
    printf("%d\n",i);
    hello(i+1,n);
}
int main()
{
    int n,i=1;
    scanf("%d",&n);
    hello(i,n);
    return 0;
}