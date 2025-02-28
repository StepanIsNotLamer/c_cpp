#include <stdio.h>
#include <stdlib.h>


struct Item {
    char name[20];
    int quantity;
    float price;
};

int main() {
    struct Item *s;
    
    int N;

    scanf("%d", &N);
    s = (struct Item*)malloc(N * sizeof(struct Item));

    for (int i = 0; i < N; i++) {
        scanf("%s %d %f", &s[i].name, &s[i].quantity, &s[i].price);
    }
    for (int i = 0; i < N; i++) {
        printf("\nItem: %s\n", s[i].name);
	printf("Quantity: %d\n", s[i].quantity);
	printf("Price: %.2f\n", s[i].price);
    }
    free(s);
    return 0;
}
