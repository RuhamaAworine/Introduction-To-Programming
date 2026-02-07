#include<stdio.h>
int main()
{
    long long int N;
    scanf("%lld",&N);
    if(N>0)
    {
        for(long long int i=1;i<=N;i++)
        {
            printf("%lld ",i);
        }
    }
    else
    {
        for(long long int i=N;i<=0;i++)
        {
            printf("%lld ",i);
        }
    }
    return 0;
}