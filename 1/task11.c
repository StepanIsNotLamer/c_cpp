#include <stdio.h>

int main() {
    float p;
    printf("Type how many O2 in ship: ");
    scanf("%f", &p);
    if (p >= 15.0f) {
        printf("OK\n");
    } else {
        printf("NOT OK\n");
    }
    return 0;
}
