//Take a number as input and check if it is an even number or odd. (Do this 4 times with 4 types of functions)
#include<stdio.h>
int evenOdd(int x)
{
    int ans;
    if(x%2==0)
    {
        ans=1;
    }
    else
    ans=0;
    return ans;
}
int evenOdd1()
{
    int x;
    scanf("%d",&x);
    int ans;
    if(x%2==0)
    {
        ans=1;
    }
    else
    ans=0;
    return ans;
}
void evenOdd2(int x)
{
    if(x%2==0)
    {
    printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
}
void evenOdd3()
{
    int x;
    scanf("%d",&x);
    if(x%2==0)
    {
    printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
}
int main()
{
    int x;
    scanf("%d",&x);
    int res=evenOdd(x);
    if(res==1)
    {
    printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
   int res1=evenOdd1();
   if(res1==1)
    {
    printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }

    int num;
    scanf("%d",&num);
    evenOdd2(num);
    evenOdd3();
    return 0;
}