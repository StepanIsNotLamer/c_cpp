#include <stdio.h>

struct Weather {
    float temp;
    float himidity;
    char condition[20];
};

int main() {
    struct Weather w;
    scanf("%f %f %s", &w.temp, &w.himidity, &w.condition);
    printf("Temperature: %.1fÂ°CÂC°\n", w.temp);
    printf("Himidity: %.1f%\n", w.himidity);
    printf("Condition: %s\n", w.condition);
    return 0;
}
