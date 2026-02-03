#include<stdio.h>
int main()
{
    long long int N;
    scanf("%lld",&N);
    long long int A[N];
    for(long long int i=0;i<N;i++)
    {
        scanf("%lld",&A[i]);
    }
    long long int sum=0;
    for(long long int i=0;i<N;i++)
    {
        sum = sum+A[i];
    }
    if(sum<0)
    {
        sum=sum+(sum*(-2));
        printf("%lld\n",sum);
    }
    else
    {
        printf("%lld\n",sum);
    }
    return 0;
}