#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    
    int max_stars = N+10;

   
    for(int i = 1; i <= max_stars; i += 2)
    {
        int space= (max_stars - i) / 2;

        for(int i = 0; i < space; i++)
            printf(" ");

        for(int j = 0; j < i; j++)
            printf("*");

        printf("\n");
    }

    
    int tree_space = (max_stars - N) / 2;

    for(int row = 1; row <= 5; row++)
    {
        for(int i = 0; i <=5; i++)
            printf(" ");

        for(int j = 0; j < N; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}
