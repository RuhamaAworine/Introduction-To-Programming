#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
    int M1,M2,D;
    scanf("%d %d %d", &M1, &M2 ,&D);
    int M3=M1+M2;
    int D2=(D*M1)/M3;
    int D1=D-D2;
    printf("%d\n",D1);
    }

    return 0;
}