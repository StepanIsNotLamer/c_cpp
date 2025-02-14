#include <stdio.h>

int main() {
    double c, n;

    printf("Type current speed: ");
    scanf("%lf", &c);

    printf("Type sample speed: ");
    scanf("%lf", &n);
    
    if (c - n > -0.1f & c - n < 0.1f) {
        printf("The difference is OK\n");
    } else {
        printf("The difference is too big\n");
    }
}
