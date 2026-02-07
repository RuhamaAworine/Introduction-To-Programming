#include<stdio.h>
void odd_even()
{
    long long int N;
    scanf("%lld",&N);
    long long int A[N];
    
    for(long long int i=0;i<N;i++)
    {
        scanf("%lld",&A[i]);
    }
    int even=0;
    int odd=0;
    for(long long int i=0;i<N;i++)
    {
        if(A[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("%d %d\n",even,odd);
}
int main()
{
    
    odd_even();
    return 0;
}