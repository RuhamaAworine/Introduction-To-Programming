#include<stdio.h>
#include<string.h>
int main()
{
    char s[100001];
    fgets(s,100001,stdin);
    long long int ln=strlen(s);
    for(int i=0;i<ln;i++)
    {
        if(s[i]==',')
        {
            s[i]=s[i]-12;
            printf("%c",s[i]);
        }
        if(s[i]>=65 && s[i]<=90)
        {
            s[i]=s[i]+32;
            printf("%c",s[i]);
        }
        else if(s[i]>=97 && s[i]<=122)
        {
            s[i]=s[i]-32;
            printf("%c",s[i]);
        }
    }

    return 0;
}