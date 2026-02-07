#include<stdio.h>
int main()
{
//1-100  odd:
    for(int i=1;i<=100;i=i+2)
     {
         printf("%d\n",i);
     }
//1-100 even:
    for(int i=0;i<=100;i=i+2)
     {
         printf("%d\n",i);
     }
// Multiply of 4:
    for(int i=4;i<=100;i=i+4)
     {
        printf("%d\n",i);
     }
//reverse:
for(int i=100;i>=1;i--)
{
    printf("%d\n",i);
}
 printf("\n\n");
 for(int i=100;i>=1;i=i-2)
 {
    printf("%d\n",i);
 }
for(int i=2;i<=64;i=i*2)
{
    printf("%d\n",i);
}
    return 0;
}