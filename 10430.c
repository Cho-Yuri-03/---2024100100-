#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int equ1 = (a + b) % c;
    int equ2 = ((a % c) + (b % c)) % c;
    int equ3 = (a * b) % c;
    int equ4 = ((a % c) * (b % c)) % c;

    printf("%d\n", equ1);
    printf("%d\n", equ2);
    printf("%d\n", equ3);
    printf("%d\n", equ4);

    return 0;
}