#include <stdio.h>

int main() {
    int x,y ;
    
    printf("Enter yout num x &\n y:");
    scanf("%d%d",&x,&y);
    
    if (x == 20 || y == 10) {
        printf("Either x is equal to 20 or y is equal to 10\n");
    } else {
        printf("Neither x is equal to 20 nor y is equal to 10\n");
    }
    return 0;

}