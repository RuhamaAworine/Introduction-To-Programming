#include<stdio.h>
void printing(int N,int i)
{
    if(i==N+1)
    return;
    printf("I love Recursion\n");
    printing(N,i+1);
}
int main()
{
    int N,i=1;
    scanf("%d",&N);
    printing(N,1);
    return 0;
}