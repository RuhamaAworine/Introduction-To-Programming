#include <stdio.h>

int main() {
    int n;
    
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
      
        for(int s = 1; s <= n - i; s++) {
            printf(" "); 
        }

        // 2. Print stars with a space after each
        for(int j = 1; j <= i; j++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}