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
    for(long long int i=N-1;i>=0;i--)
    {
        if(i%2 !=0)
        {
            printf("%lld ",A[i]);
        }
    }
    return 0;
}