#include<stdio.h>

void CalculateA(long long int A, long long int B, long long int C)
{
    if (A <= B && A <= C)
        printf("%lld\n", A);
    else if (B <= A && B <= C)
        printf("%lld\n", B);
    else
        printf("%lld\n", C);
}

void CalculateB(long long int A, long long int B, long long int C)
{
    if ((A >= B && A <= C) || (A <= B && A >= C))
        printf("%lld\n", A);
    else if ((B >= A && B <= C) || (B <= A && B >= C))
        printf("%lld\n", B);
    else
        printf("%lld\n", C);
}

void CalculateC(long long int A, long long int B, long long int C)
{
    if (A >= B && A >= C)
        printf("%lld\n", A);
    else if (B >= A && B >= C)
        printf("%lld\n", B);
    else
        printf("%lld\n", C);
}

int main()
{
    long long int A, B, C;
    scanf("%lld %lld %lld", &A, &B, &C);

    CalculateA(A, B, C);   
    CalculateB(A, B, C);  
    CalculateC(A, B, C);  

    printf("\n%lld\n%lld\n%lld", A, B, C);
    return 0;
}
