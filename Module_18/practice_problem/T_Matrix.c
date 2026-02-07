#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int A[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    int sum_of_primary=0;
    int sum_of_secondary=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                sum_of_primary=sum_of_primary+A[i][j];
            }
            if(i+j==n-1)
            {
                sum_of_secondary=sum_of_secondary+A[i][j];
            }
        }
    }
    int dif=abs(sum_of_primary-sum_of_secondary);
    printf("%d ",dif);
    return 0;
}