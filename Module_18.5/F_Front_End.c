#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    int i=0,j=n-1;
    while(i<j)
    {
        printf("%d ",A[i]);
        printf("%d ",A[j]);
       
        i++;
        j--;
    }
     if(i==j)
        {
            printf("%d ",A[i]);
        }
    return 0;
}