#include<stdio.h>
int main()
{
    char s[10];
    gets(s);
    printf("%s\n",s);
    char s1[50];
    fgets(s1,25,stdin);
    printf("%s\n",s1);
    return 0;
}