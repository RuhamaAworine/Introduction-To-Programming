#include<stdio.h>
#include<string.h>
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        char S[101];
        scanf("%s",&S);
        int ln=strlen(S);
        if(ln<=10)
        {
            printf("%s\n",S);
        }
        else {
            int count=ln-2;
            
            printf("%c%d%c\n",S[0],count,S[ln-1]);
        }
    }
    return 0;
}