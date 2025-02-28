#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum car_type {Gasoline, Disel, Electric};


struct Vehicle {
    char brand[20];
    char model[20];
    int year;
    enum car_type type;
};

int main() {
    struct Vehicle *cars;
    char ftype[20];
    
    int N;
    scanf("%d", &N);
    
    cars = (struct Vehicle*)(malloc(N * sizeof(struct Vehicle)));

    for (int i = 0; i < N; i++) {
        scanf("%s %s %d %s", &cars[i].brand,
                             &cars[i].model,
                             &cars[i].year,
                             &ftype);
        if (strcmp(ftype, "Gasoline") == 0) {
            cars[i].type = Gasoline;
        } else if (strcmp(ftype, "Disel") == 0) {
            cars[i].type = Disel;
        } else if (strcmp(ftype, "Electric") == 0) {
            cars[i].type = Electric;
        }
    }

    for (int i = 0; i < N; i++) {
        printf("\nVehicle: %s %s\n", cars[i].brand, cars[i].model);
        printf("Year: %d\n", cars[i].year);
        printf("Engine Type: ");

        switch (cars[i].type) {
             case 0:
                 printf("Gasoline\n");
                 break;
             case 1:
                 printf("Disel\n");
                 break;
             case 2:
                 printf("Electric\n");
                 break;
        }
    }

    free(cars);

    return 0;
}
