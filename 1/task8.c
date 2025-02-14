#include <stdio.h>

int main() {
    int w;
    printf("Type weight: ");
    scanf("%d", &w);
    if (w % 4 == 0) {
        printf("Cargo can be placed in 4 rooms by %d kilo\n", w / 4);
    }
    return 0;
}
