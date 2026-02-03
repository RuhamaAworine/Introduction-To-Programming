#include<stdio.h>
int main()
{
    int N,X;
    int even=0;
    int odd=0;
    int pos=0;
    int neg=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&X);
            if(X%2==0)
        {
            even++;
        }
        if(X%2!=0)
        {
            odd++;
        }
        if(X>0)
        {
            pos++;
        }
        if(X<0)
        {
            neg++;
        }
    }
    
    printf("Even: %d\n",even);
    printf("Odd: %d\n",odd);
    printf("Positive: %d\n",pos);
    printf("Negative: %d\n",neg);
    return 0;
}