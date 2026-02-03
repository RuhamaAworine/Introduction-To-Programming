#include<stdio.h>
int main()
{
    // int x,y;
    // x=10;
    // y=x++;
    // printf("%d %d\n",x,y);
    // x=10;
    // y=++x;
    // printf("%d %d\n",x,y);


    // int x=10;
    // int y=x++;
    // int z=++y;
    // printf("%d\n",z++);

    int x=10;
    ++x;
    printf("%d\n",x);

    x=10;
    --x;
    printf("%d\n",x--);
    printf("%d\n",x);

    return 0;
}