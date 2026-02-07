#include<stdio.h>
int main()
{
    int N,M;
    scanf("%d %d",&N, &M);
    int a[N][M];
    int i,j;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    i=N-1;
    
    for(j=0;j<M;j++)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");
    j=M-1;
    for(i=0;i<N;i++)
    {
        printf("%d ",a[i][j]);
    }
    return 0;
}