#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    int x,val;
    scanf("%d %d", &x, &val);
    for(int i=x;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n--;
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}