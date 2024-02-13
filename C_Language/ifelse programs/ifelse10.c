#include <stdio.h>

int main() {
    int x,y ;

    printf("Enter yout num x &\n y:");
    scanf("%d%d",&x,&y);

     if (x && y) {
        printf("Both x and y are true\n");
    } else {
        printf("Either x or y is false\n");
    }

    return 0;
}
