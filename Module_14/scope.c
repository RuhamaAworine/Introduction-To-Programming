#include<stdio.h>
int x =10;//global variable
int sum()
{
    //int x=300;
    printf("sum->%d\n",x);
}
int main()
{
    //int x =10;
    printf("main->%d\n",x);
    sum();
    return 0;
}

