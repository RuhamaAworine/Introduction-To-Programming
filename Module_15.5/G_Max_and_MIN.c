#include<stdio.h>
#include<limits.h>
void maxMin(int A[],int n)
{
    int max=INT_MIN;
    int mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
        if(A[i]<mini)
        {
            mini=A[i];
        }
    }
    printf("%d %d\n",mini,max);
}
int main()
{
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    maxMin(A,n);

    return 0;
}