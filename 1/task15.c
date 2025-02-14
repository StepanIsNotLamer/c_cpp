#include <stdio.h>

int main() {
    int d;
    printf("Type transfer speed in KiB/s: ");
    scanf("%d",&d);
    printf("Speed is %.2f MB/s\n", (d * 1000.f) / (8.f * 1024.f * 1024.f));
    return 0;
}
