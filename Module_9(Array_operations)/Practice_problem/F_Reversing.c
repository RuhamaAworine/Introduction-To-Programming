#include<stdio.h>
int main()
{
    long long int N;
    scanf("%lld", &N);
    long long int A[N];
    for(long long int i=0;i<N;i++)
    {
        scanf("%lld", &A[i]);
    }
    long long int i=0;
    long long int j=N-1;
    while(i<j)
    {
        long long int temp=A[i];
        A[i]=A[j];
        A[j]=temp;
        i++;
        j--;
    }
    for(long long int i=0;i<N;i++)
    {
        printf("%lld ",A[i]);
    }
    return 0;
}