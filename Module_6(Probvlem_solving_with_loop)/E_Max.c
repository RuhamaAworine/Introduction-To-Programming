#include<stdio.h>
#include<limits.h>
int main()
{
    int N;
    int x;
     scanf("%d",&N);
    int max=INT_MIN;
   
    for(int i=0;i<N;i++)
    {
        scanf("%d",&x);
        if(x>max)
        {
            max=x;
        }
    }
    printf("%d ",max);
    return 0;
}