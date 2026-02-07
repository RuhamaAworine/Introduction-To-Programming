#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for(int j=0;j<T;j++)
    {
    long long int N;
    scanf("%lld",&N);
    long long int fact=1;
    for(long long int i=1;i<=N;i++)
    {
        fact=fact*i;

    }
    printf("%lld\n",fact);
    }
    
    return 0;
}