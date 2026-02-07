#include<stdio.h>
int main()
{
    char C;
    int ch;
    scanf("%c",&C);
    if(C>='a'&& C<'z')
    {
        ch=C+1;
        printf("%c\n",ch);
    }
    else if(C=='z')
    {
        ch=C-25;
        printf("%c\n",ch);
    }
    return 0;
}