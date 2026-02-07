#include<stdio.h>

void hello(int i,int n)
{
    if(i==0)
    {
        return;//end condition
    }
    printf("%d\n",i);
    hello(i-1,n);//increment/decrement
}
int main()
{
    int n;
    scanf("%d",&n);
    int i=n;
    hello(i,n);//initialization
    return 0;
}