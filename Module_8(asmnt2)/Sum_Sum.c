#include<stdio.h>
int main()
{
    long long int N;
    scanf("%lld",&N);
    long long int V;
    long long int pos_sum=0;
    long long int neg_sum=0;
    for(long long int i=0;i<N;i++)
    {
        scanf("%lld",&V);
        if(V>0)
        {
            pos_sum=pos_sum+V;
        }
        else
        {
            neg_sum=neg_sum+V;
        }
    }
    printf("%lld %lld\n",pos_sum,neg_sum);

    return 0;
}