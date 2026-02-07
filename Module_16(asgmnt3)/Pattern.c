#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int space=N-1;
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=space;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=((i*2) -1);j++)
        {
            if(i%2!=0)
            printf("#");
            else
            printf("-");
        }
        space--;
        printf("\n");
    }
    space=1;
    for(int i=N-1;i>=1;i--)
    {
        for(int j=1;j<=space;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=((i*2) -1);j++)
        {
            if(i%2!=0)
            printf("#");
            else
            printf("-");
        }
        space++;
        printf("\n");
    }
    
    return 0;
}