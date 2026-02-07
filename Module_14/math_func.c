#include<stdio.h>
#include<math.h>
int main()
{
    int ans=floor(5.6);
    printf("%d\n",ans);

    int fn2=ceil(4.5);
    printf("%d\n",fn2);

    int fn3=round(7.8);
    printf("%d\n",fn3);

    double fn4=sqrt(20);
    printf("%f\n",fn4);

    int fn5=pow(4,2);
    printf("%d\n",fn5);

    int fn6=abs(-20);
    printf("%d\n",fn6);
    fn6=abs(4);
    printf("%d\n",fn6);
    return 0;

}