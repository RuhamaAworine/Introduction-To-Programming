#include<stdio.h>
#include<limits.h>
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        long long int N;
        scanf("%lld",&N);

        long long int A[N];
        for(long long int i=0;i<N;i++)
        {
            scanf("%lld",&A[i]);
        }
        long long int res=LLONG_MAX;
        for(long long int i=0;i<N;i++)
        {
            for(long long int j=i+1;j<N;j++)
            {
                long long int sum=A[i]+A[j]+j-i;
                if(sum < res)
                {
                    res=sum;
                }

            }
        }
        printf("%lld\n",res);
    }
    return 0;
}