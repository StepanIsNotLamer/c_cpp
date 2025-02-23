#include <stdio.h>

int main() {
    double t;
    printf("Type time to transmit: ");
    scanf("%lf", &t);
    printf("%d minutes %.1lf seconds\n", (int) t / 60, t - 60 * ((int) t / 60));
    return 0;
}
