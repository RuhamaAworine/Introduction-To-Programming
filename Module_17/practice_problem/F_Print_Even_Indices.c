#include<stdio.h>
void even_indices(long long int a[],long long int n, long long int i)
{
   if(i>=n)
   return;
   even_indices(a,n,i+2);
   printf("%lld ",a[i]);
}
int main()
{
    long long int N;
    scanf("%lld",&N);
    long long int A[N];
    long long int i;
    for(i=0;i<N;i++)
    {
        scanf("%lld",&A[i]);
    }
    even_indices(A,N,0);
    return 0;
}