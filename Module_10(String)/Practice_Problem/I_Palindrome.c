#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    char S[1001];
    scanf("%s",&S);
    int ln=strlen(S);
    int i=0;
    bool Y=true;
    while(i<ln)
    {
        if(S[i]!=S[ln-1])
        {
           Y=false;
           break;
        }
        i++,ln--;
    }
    if(!Y)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    return 0;
}