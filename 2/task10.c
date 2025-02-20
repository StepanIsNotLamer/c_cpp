#include <stdio.h>
#include <stdlib.h>

struct Course {
    char name[20];
    int credit;
    char prof[20];
};

int main() {
    struct Course *c;
    int N;

    scanf("%d", &N);
    
    c = (struct Course*)(malloc(N * sizeof(struct Course)));

    for (int i = 0; i < N; i++) {
        scanf("%s %d %s", &c[i].name, &c[i].credit, &c[i].prof);
    }

    for (int i = 0; i < N; i++) {
        printf("\nCourse: %s\n", c[i].name);
        printf("Credits: %d\n", c[i].credit);
        printf("Professor: %s\n", c[i].prof);
    }
    free(c);

    return 0;
}
