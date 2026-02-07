#include<stdio.h>
#include<stdbool.h>
int main()
{
     int r,c;
    scanf("%d %d",&r ,&c);
    int A[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    bool is_unit=true;
    bool is_val=true;
    
   if(r==c)
   {
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==j)
            {
                if(A[i][j]!=1)
                {
                    is_val=false;
                }
            }
            if(i!=j)
            {
                 if(A[i][j]!=0)
                 {
                    is_unit=false;
                 }
            }
        }
    }
    if(is_unit==true && is_val==true)
        {
            printf("This is  a unit matrix\n");
        }
        else
        {
            printf("This is not a unit matrix\n");
        }
   }
   else
   {
    printf("This is not a unit matrix\n");
   }

    
    return 0;
}