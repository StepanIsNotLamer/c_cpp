#include <stdio.h>

union Data {
    int i;
    float f;
    char s[20];
};

int main() {
    union Data d;
    int dtype;
    scanf("%d", &dtype);

    switch (dtype) {
        case 1:
            scanf("%d", &d.i);
	    printf("Integer: %d\n", d.i);
	    break;
        case 2:
            scanf("%f", &d.f);
	    printf("Float: %.2f\n", d.f);
	    break;
        case 3:
            scanf("%s", &d.s);
	    printf("String: %s\n", d.s);
	    break;
    }
    return 0;
}
