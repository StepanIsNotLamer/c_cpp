#include <stdio.h>
#include <stdlib.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Event {
    char name[20];
    struct Date date;
    char info[40];
};

int main() {
    struct Event *s;
    
    int N;

    scanf("%d", &N);
    s = (struct Event*)malloc(N * sizeof(struct Event));

    for (int i = 0; i < N; i++) {
        scanf("%s %d %d %d %s", &s[i].name,
                          &s[i].date.day,
                          &s[i].date.month,
                          &s[i].date.year,  
                          &s[i].info);
    }
    for (int i = 0; i < N; i++) {
        printf("\nName: %s\n", s[i].name);
	printf("Date %d/%d/%d:\n", s[i].date.day,
                                   s[i].date.month,
				   s[i].date.month);
	printf("Description: %s\n", s[i].info);
    }
    free(s);
    return 0;
}
