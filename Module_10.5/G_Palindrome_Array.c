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
    long long int i=0;
    long long int j=N-1;
    long long int p=0;
    while(i<j)
    {
       
        if(A[i]==A[j])
        {
            p++;
        }
        else{
            p=0;
            break;
        }
        i++;j--;

    }
    if(p>0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}