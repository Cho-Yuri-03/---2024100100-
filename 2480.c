#include <stdio.h>

int main(void)
{
    int a, b, c, sum;
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c)
        sum = 10000 + a * 1000;
    else if (a == b)
        sum = 1000 + a * 100;
    else if (b == c)
        sum = 1000 + b * 100;
    else if (c == a)
        sum = 1000 + c * 100;
    else {
        int max = a;
        if (b > max)
            max = b;
        if (c > max)
            max = c;
        sum = max * 100;
    }

    printf("%d", sum);

    return 0;
}