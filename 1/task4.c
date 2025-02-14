#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    time_t now = time(NULL);
    char t[26];
    char ui[26];

    printf("Type date(YYYYMMDD): ");
    scanf("%s", &ui);
 
    strftime(t, 20, "%Y%m%d", localtime(&now));
    if (atoi(ui) > atoi(t)) {
        printf("This is the future\n");
    } else {
        printf("This is the past\n");
    }

    return 0;
}
