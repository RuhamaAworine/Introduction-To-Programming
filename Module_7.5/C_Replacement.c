#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    long long int A[N];
    for(long long int i=0;i<N;i++)
    {
        scanf("%lld",&A[i]);
    }
    for(long long int i=0;i<N;i++)
    {
        if(A[i]==0)
        {
            printf("0 ");
        }
        else if(A[i]>0)
        {
            A[i]=1;
            printf("%lld ",A[i]);
        }
        else
        {
            A[i]=2;
            printf("%lld ",A[i]);
        }
    }
    return 0;
}