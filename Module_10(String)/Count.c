#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000001];
    scanf("%s",s);
    int ln=strlen(s);
    int sum =0;
    for(int i=0;i<ln;i++)
    {
        sum+=s[i]-48;
    }
    printf("%d ",sum);
    printf("\n");
    char str[20];
    return 0;
}