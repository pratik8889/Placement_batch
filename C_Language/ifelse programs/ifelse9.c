#include <stdio.h>

int main() {
    int x,y ;

    printf("Enter yout num x &\n y:");
    scanf("%d%d",&x,&y);

     if (x > 15 ? y > 5 : x < 10) {
        printf("Condition is true\n");
    } else {
        printf("Condition is false\n");
    }
    return 0;
}
