#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        long long int w,h;
        scanf("%lld %lld", &w, &h);
        char s[7]="Square";
        char t[10]="Rectangle";
        if(w==h)
        {
            printf("%s\n",s);
        }
        else
        {
            printf("%s\n",t);
        }
    }
    return 0;
}