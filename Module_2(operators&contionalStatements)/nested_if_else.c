#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    // if(tk>=5000)
    // {
    //     printf("Cox's Bazar jabo.\n");
    //     if(tk>=10000)
    //     {
    //         printf("Saint martin jabo.\n");
    //     }
    //     else
    //     {
    //         printf("Ferot chole ashbo.\n");
    //     }
    // }
    // else
    // {
    //     printf("Kothao jabona.\n");
    // }
//if_else variation:
    if(tk>=5000)
    {
        printf("Cox's Bazar jabo\n");
    }
    if(tk>=6000)
    {
        printf("Sajek jabo.\n");
    }
    else
    {
        printf("Mawa jabo\n");
    }
    if(tk>=10000)
    {
        printf("saintmartin jabo\n");
    }

    return 0;
}