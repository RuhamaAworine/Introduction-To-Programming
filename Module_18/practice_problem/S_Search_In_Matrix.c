#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n,m;
    scanf("%d %d",&n ,&m);
    int A[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    int x;
    scanf("%d",&x);
    bool is_number=true;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(A[i][j]==x)
            {
               is_number=false; 
            }
            
        }
    }
    if(is_number==true)
    {
        printf("will take number\n");
    }
    else
    {
        printf("will not take number\n");
    }
    return 0;
}