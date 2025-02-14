#include <stdio.h>

int main() {
    int n;
    printf("Type number of pilots:");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("OK\n");
    } else {
        printf("NOT OK\n");
    }
    return 0;
}
