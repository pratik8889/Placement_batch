#include <stdio.h>

int main() {
    int x,y ;

   printf("Enter yout num x &\n y:");
    scanf("%d%d",&x,&y);

    if (x > 10 && y < 20) {
        printf("x is greater than 10 and y is less than 20\n");
    } else {
        printf("Either x is not greater than 10 or y is not less than 20\n");
    }
    return 0;
}