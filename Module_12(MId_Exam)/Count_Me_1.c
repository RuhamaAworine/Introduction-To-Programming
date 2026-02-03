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
    long long int odd=0;
    long long int even=0;
    for(long long int i=0;i<N;i++)
    {
        if(A[i]%2==0)
        {
            even++;
        }
        else if(A[i]%3==0)
        {
            odd++;
        }
    }
    printf("%lld %lld\n",even,odd);
    return 0;
}