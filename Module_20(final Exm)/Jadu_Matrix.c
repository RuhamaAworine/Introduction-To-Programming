#include<stdio.h>
#include<stdbool.h>
int main()
{
    int N,M;
    scanf("%d %d",&N, &M);
    int A[N][M];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
 bool diago=true;

if(N==M){
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
         if((i==j ||i+j ==N-1))
        {
            if(A[i][j]!=1)
            diago=false;
        }
        else
        {
        if(A[i][j]!=0)
        {
            diago=false;
        }
        }
        
        }
    }
    if(diago==true )
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
else
        {
        printf("NO\n");
        }
    
    return 0;
}