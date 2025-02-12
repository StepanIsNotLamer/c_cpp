#include <stdio.h>

int main() {
    char s;
    printf("Type engine mark: ");
    scanf("%c", &s);
    if (s >= 'A' & s <= 'Z') {
        printf("OK\n");
    } else {
        printf("NOT OK\n");
    }
    return 0;
}
