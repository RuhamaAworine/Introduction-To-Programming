#include<stdio.h>
int main()
{
     int r,c;
    scanf("%d %d",&r ,&c);
    int A[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    if(r==1)
    {
        printf("\nThis is a row matrix\n");
    }
    else
    {
        printf("\nThis is not  a row matrix\n");
    }

    if(r==c)
    {
        printf("\nThis is a square matrix\n");
    }
    else
    {
        printf("\nThis is not  a square matrix\n");
    }
    return 0;
}