#include<stdio.h>
#include<string.h>
int is_palindrome(char S[])
{
    int i=0;
    int j=strlen(S)-1;
    
    while(i<j)
    {
        if(S[i]!=S[j])
        {
            return 0;
        }
        i++;
        j--;  
    }
    
     return 1;

}
int main()
{
    char S[1001];
    scanf("%s",S);
    int res=is_palindrome(S);
    if(res==1)
    {
        printf("Palindrome\n");
    }
    else{
        printf("Not Palindrome\n");
    }
    
    return 0;
}