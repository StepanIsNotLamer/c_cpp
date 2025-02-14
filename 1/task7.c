#include <stdio.h>

int main() {
    float s;
    printf("Type signal friquency: ");
    scanf("%f", &s);
    if (s >= 2.5f & s <= 3.5f) {
        printf("Signal is good\n");
    } else {
        printf("Could be better\n");
    }
    return 0;
}

