#include<stdio.h>
void reverse(int n,int i)
{
    if(i==n+1)
    return;
    reverse(n,i+1);
    printf("%d",i);
    if(i>1)
    {
        printf(" ");
    }
}
int main()
{
    int N;
    scanf("%d",&N);
    int i=1;
    reverse(N,1);
    return 0;
}