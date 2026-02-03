#include<stdio.h>
int main()
{
    int n,star=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)//for printing line
    {
        for(int j=1;j<=star;j++)//for printing star
        {
            printf("*");
        }
        printf("\n");
        star++;
    }
    printf("Reverse:\n");
    int star_r=n;

      for(int i=1;i<=n;i++)//for printing line
    {
        for(int j=1;j<=star_r;j++)//for printing star
        {
            printf("*");
        }
        printf("\n");
        star_r--;
    }
    return 0;
}
