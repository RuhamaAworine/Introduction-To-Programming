#include<stdio.h>
#include<limits.h>
int main()
{
    long long int N;
    scanf("%lld",&N);
    long long int A[N];
    for(long long int i=0;i<N;i++)
    {
        scanf("%lld", &A[i]);
    }
    long long int max=LLONG_MIN;
    long long int min=LLONG_MAX;
    int minidx=-1;
    int maxidx=-1;
    for(long long int i=0;i<N;i++)
    {
        if(max<A[i])
        {
            max=A[i];
            maxidx=i;
        }
        if(min>A[i])
        {
            min=A[i];
            minidx=i;
        }
         
    }
    long long int temp=A[maxidx];
    A[maxidx]=A[minidx];
    A[minidx]=temp;
   
    for(long long int i=0;i<N;i++)
    {
    
        printf("%lld ",A[i]);
    }
    return 0;
}