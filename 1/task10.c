#include <stdio.h>

int main() {
    int t;
    printf("Type temperature: ");
    scanf("%d", &t);
    if (t >= -150 & t <= 120) {
        printf("OK\n");
    } else {
        printf("NOT OK\n");
    }
    return 0;
}
