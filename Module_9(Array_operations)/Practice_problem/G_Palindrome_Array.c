#include<stdio.h>
#include<stdbool.h>
int main()
{
    int N;
    scanf("%d",&N);
    long long int A[N];
    for(long long int i=0;i<N;i++)
    {
        scanf("%lld", &A[i]);
    }
    long long int i=0;
    long long int j=N-1;
    bool p=true;
    while(i<j)
    {
        if(A[i]!=A[j])
        {
            p=false;
            break;
        }
        i++;
        j--;
    }
    if(!p)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    return 0;
}