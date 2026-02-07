#include<stdio.h>
void fun(int a[],int n)
{
    //a[1]=200;
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    //printf("\nFun function:%p\n",a);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //int a[5]={10,20,30,40,50};
    fun(a,n);
    //printf("\nMain function:%p\n",a);
    return 0;
}