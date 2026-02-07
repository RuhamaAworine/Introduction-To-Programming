#include<stdio.h>
void print_num(int n,int i)
{
    if(i>n)
    return;
    print_num(n,i+1);
    printf("%d ",i);
}
int main()
{
    int N;
    scanf("%d",&N);
    int i=1;
    print_num(N,1);
    return 0;
}