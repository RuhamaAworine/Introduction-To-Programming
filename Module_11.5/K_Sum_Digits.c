#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    char A[N+1];
    scanf("%s",A);
    int sum=0;
    for(int i=0;A[i]!='\0';i++)
    {
        sum=sum+A[i]-'0';
    }
    printf("%d\n",sum);
    return 0;
}