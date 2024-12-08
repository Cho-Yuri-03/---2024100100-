#include <stdio.h>

int main(void) 
{
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = n-i; j > 0; j--){
            printf(" ");
        }
        for (int k = 2*i-1; k > 0; k--){
            printf("*");
        }
        printf("\n");
    }

    for (int l = n-1; l > 0; l--) {
        for (int m = n-l; m > 0; m--){
            printf(" ");
        }
        for (int n = 2*l-1; n > 0; n--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}