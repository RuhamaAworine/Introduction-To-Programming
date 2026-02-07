#include<stdio.h>
#include<string.h>
int main()
{
    char S[1001];
    scanf("%s",&S);
    char T[1001];
    scanf("%s",&T);
    long long int sl=strlen(S);
    long long int tl=strlen(T);
    printf("%lld %lld\n",sl, tl);
    printf("%s %s\n",S,T);

    return 0;
}