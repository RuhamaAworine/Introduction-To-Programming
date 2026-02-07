#include<stdio.h>
#include<string.h>
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        char S[10001];
        scanf("%s",S);
        int sa=0;
        int ca=0;
        int digit=0;
        for(int i=0;S[i]!='\0';i++)
        {
            if(S[i]>='A' && S[i]<='Z')
            {
                ca++;
            }
            else if(S[i]>='a' && S[i]<='z')
            {
                sa++;
            }
            else if(S[i]>='0' && S[i]<='9')
            {
                digit++;
            }
        }
        printf("%d %d %d\n",ca,sa,digit);
    }
    
    return 0;
}