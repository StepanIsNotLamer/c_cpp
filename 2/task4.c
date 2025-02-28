#include <stdio.h>
#include <stdlib.h>


struct Employee {
    char name[20];
    char position[20];
    float salary;
};

int main() {
    struct Employee *s;
    
    int N;

    scanf("%d", &N);
    s = (struct Employee*)malloc(N * sizeof(struct Employee));

    for (int i = 0; i < N; i++) {
        scanf("%s %s %f", &s[i].name, &s[i].position, &s[i].salary);
    }
    for (int i = 0; i < N; i++) {
        printf("\nName: %s\n", s[i].name);
	printf("Position: %s\n", s[i].position);
	printf("Salary: %.2f\n", s[i].salary);
    }
    free(s);
    return 0;
}
