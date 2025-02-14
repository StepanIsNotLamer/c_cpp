#include <stdio.h>

int main() {
    int w;
    printf("Type your weight: ");
    scanf("%d", &w);
    if (60 <= w & w <= 90) {
        printf("You can go to the ship\n");
    } else {
        printf("You can not go to the ship\n");
    }
    return 0;
}
