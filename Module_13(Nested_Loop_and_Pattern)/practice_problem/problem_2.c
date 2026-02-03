#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        // left spaces
        for(int s = 1; s <= n - i; s++) {
            printf(" "); // single space
        }

        // numbers
        for(int j = 1; j <= i; j++) {
            if(j == i)
                printf("%d", j); // last number
            else
                printf("%d ", j); // number + space
        }

        printf("\n");
    }

    return 0;
}
