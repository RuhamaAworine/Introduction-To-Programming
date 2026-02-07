#include<stdio.h>
int main()
{
    long long int X,Y;
    scanf("%lld %lld",&X, &Y);
    long long int sum=X+Y;
    long long int mult=X*Y;
    long long int sub=X-Y;
    printf("%lld + %lld = %lld\n",X,Y,sum);
    printf("%lld * %lld = %lld\n",X,Y,mult);
    printf("%lld - %lld = %lld\n",X,Y,sub);
    return 0;
} 