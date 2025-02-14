#include <stdio.h>

int main() { // Решается перебором всех вариантов с помощью тройного вложенного цикла...Попробуй =)
    int n;
    printf("Type number of people: ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("%d gropus of 2 people\n", n / 2);
    }
    if (n % 3 == 0) {
        printf("%d gropus of 3 people\n", n / 3);
    }
    if (n % 4 == 0) {
        printf("%d gropus of 4 people\n", n / 4);
    }
    return 0;
}
