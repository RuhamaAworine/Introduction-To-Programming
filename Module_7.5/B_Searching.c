#include<stdio.h>
#include<stdbool.h>
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
    scanf("%lld",&X);
    bool pos=0;
    for(long long int i=0;i<N;i++)
    {
        if(A[i]==X)
        {
            printf("%lld\n",i);
            pos=1;
            break;
        }
       
    }
    if(!pos)
    {
        printf("-1\n");
    }
   
    return 0;
}