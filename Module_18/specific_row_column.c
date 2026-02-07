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
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    printf("\nPrinting a specific row:\n");

    int specific_row;
    scanf("%d",&specific_row);

    for(int i=0;i<c;i++)
    {
        printf("%d ",A[specific_row][i]);
    }

    printf("\nPrinting a specific column:\n");

    int specific_col;
    scanf("%d",&specific_col);
    
    for(int i=0;i<r;i++)
    {
        printf("%d ",A[i][specific_col]);
    }
    return 0;
}