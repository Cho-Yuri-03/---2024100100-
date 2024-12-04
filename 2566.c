#include <stdio.h>

int main(void)
{
    int n;
    int x = 0, y = 0, max = 0;
    
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            scanf("%d ", &n);
            if(max < n){
                max = n;
                x = i;
                y = j;
            }
        }  
    }
    printf("%d\n", max);
    printf("%d %d", x+1, y+1);
    
    return 0;
}