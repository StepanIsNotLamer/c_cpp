#include <stdio.h>
#include <stdlib.h>


struct Student {
    char name[20];
    int age;
    float gpa;
};

int main() {
    struct Student *s;
    
    int N;

    scanf("%d", &N);
    s = (struct Student*)malloc(N * sizeof(struct Student));

    for (int i = 0; i < N; i++) {
        scanf("%s %d %f", &s[i].name, &s[i].age, &s[i].gpa);
    }
    for (int i = 0; i < N; i++) {
        printf("\nName: %s\n", s[i].name);
	printf("Age: %d\n", s[i].age);
	printf("GPA: %.1f\n", s[i].gpa);
    }
    free(s);
    return 0;
}
