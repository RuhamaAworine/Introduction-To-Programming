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
    long long int X;
    int V;
    scanf("%lld %d", &X, &V);
    for(long long int i=0;i<N;i++)
    {
        if(X==i)
        {
            A[i]=V;
        }
    }
    for(long long int i=N-1;i>=0;i--)
    {
        printf("%lld ",A[i]);
    }
    return 0;
}