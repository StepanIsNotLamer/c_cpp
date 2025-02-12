#include <stdio.h>

int main() {
    int a;
    printf("Type angle of ship: ");
    scanf("%d", &a);
    if (a <= 180 & a >= -180) {
        printf("OK\n");
    } else {
        printf("NOT OK\n");
    }
    return 0;
}
