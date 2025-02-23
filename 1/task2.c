#include <stdio.h>

int main() {
    unsigned int d;
    printf("Type distance: ");
    scanf("%d", &d);
    if (d > 500) {
        printf("Too far\n");
    } else {
        printf("Not too far\n");
    }
    return 0;
}
