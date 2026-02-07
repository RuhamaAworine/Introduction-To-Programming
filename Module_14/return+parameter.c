#include<stdio.h>
int sum(int num1,int num2)
{
    
    int ans=num1+num2;
    return ans;
}

int main()
{
    int a,b;
    scanf("%d %d",&a, &b);
    int val=sum(a,b);
    printf("%d %d\n",val);
    return 0;
}