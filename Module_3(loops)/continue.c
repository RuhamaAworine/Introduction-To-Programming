#include<stdio.h>
int main()
{
    for(int i=1;i<=10;i++)
        {
            if(i==5)
            {
                continue;//continue value skip kore
            }
            printf("%d\n",i);
        }
    return 0;
}