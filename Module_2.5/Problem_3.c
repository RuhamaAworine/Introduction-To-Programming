//Multiple or not:
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    int rem=a%b;
   if(rem==0)
   {
    printf("Yes\n");
   }
   else{
    printf("No\n");
   }
    return 0;
}