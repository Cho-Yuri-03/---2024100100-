#include <stdio.h>

int main(void)
{
    int a, b, v;
    scanf("%d %d %d", &a, &b, &v);
    
    int d;
    d = (v - b - 1) / (a - b) +1;
    printf("%d", d);
    
    return 0;
}