#include <stdio.h>

int main()
{
    long long int N, M;
    scanf("%lld %lld", &N, &M);

    long long int A[N];
    for (long long int i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
    }

    long long int fre[M+1];

    // Initialize all frequencies to 0
    for (long long int i = 1; i <= M; i++)
    {
        fre[i] = 0;
    }

    // Count frequencies safely
    for (long long int i = 0; i < N; i++)
    {
        long long int val = A[i];
        if (val >= 1 && val <= M)   // ensure valid index
        {
            fre[val]++;
        }
    }

    // Print frequencies
    for (long long int i = 1; i <= M; i++)
    {
        printf("%lld\n", fre[i]);
    }

    return 0;
}
