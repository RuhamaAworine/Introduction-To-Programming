#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=1;i<=T;i++)
    {
    int N;
    scanf("%d",&N);
    // if(N==0)
    // {
    //     printf("0\n");
    // }
    // else
    // {
    //     while(N!=0)
    // {
    //     printf("%d ",N%10);
    //     N/=10;
    // }
    // printf("\n");
    // }
    do
    {
        printf("%d ",N%10);
        N/=10;
    }while(N!=0);
     printf("\n");
    }
    
    
    return 0;
}