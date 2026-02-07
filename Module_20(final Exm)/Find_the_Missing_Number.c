#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        long long int M;
        long long int A,B,C;
        long long int D;
        scanf("%lld",&M);
        scanf("%lld %lld %lld",&A, &B, &C);
        long long int mult=A*B*C;
        if(M % mult == 0)
        {
            D=M/mult;
            printf("%lld",D);
        }
        else
        {
            printf("-1");
        }
        printf("\n");
    }
    return 0;
}