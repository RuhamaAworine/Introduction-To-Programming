#include<stdio.h>
void number(int n,int i)
{
    if(i==n+1)
    {
        return ;
    }
    printf("%d\n",i);
    number(n,i+1);
}
int main()
{
    int N;
    int i=1;
    scanf("%d",&N);
    number(N,1);
    return 0;
}