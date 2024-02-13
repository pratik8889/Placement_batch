#include <stdio.h>

int main() {
    int x,y ;

    printf("Enter yout num x &\n y:");
    scanf("%d%d",&x,&y);

    if (!(x == 10)) {
        printf("x is not equal to 10\n");
    } else {
        printf("x is equal to 10\n");
    }
    return 0;
}
