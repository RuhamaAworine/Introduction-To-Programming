#include<stdio.h>
int main()
{
    int n,star=1,space=n-1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)//for printing line
    {
         for(int j=1;j<=space;j++)//for printing star
        {
            printf(" ");
        }
        for(int j=1;j<=star;j++)//for printing star
        {
            printf("*");
        }
        printf("\n");
        star++;
        space--;
    }
    return 0;
}