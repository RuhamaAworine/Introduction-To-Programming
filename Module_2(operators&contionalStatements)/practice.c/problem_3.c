//Explain if else ladder.
/*if-else ladder is a conditional statement or structure where
 there is a if(...) statement in the beginning and else{..} statement in the end. 
In between there is used one or more else-if(..) condition.
An example is given below:*/
#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("Divisible by 2\n");
    }
    else if(num%3==0)
    {
        printf("Divisible by 3\n");
    }
    else if(num%5==0)
    {
        printf("Divisible by 5\n");
    }
    else{
        printf("prime\n");
    }
    return 0;
}