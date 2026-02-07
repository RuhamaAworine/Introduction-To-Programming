#include<stdio.h>
void print_num(int n,int i)
{
    if(i>n)
    return;
    printf("%d\n",i);
    print_num(n,i+1);
}
int main()
{
    int N;
    int i=1;
    scanf("%d", &N);
    print_num(N,1);
    return 0;
}