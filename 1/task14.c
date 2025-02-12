#include <stdio.h>

int main() {
    int w;
    printf("Type weight: ");
    scanf("%d", &w);
    printf("Weight on moon is %.2f\n", w / 6.0f);
    return 0;
}
