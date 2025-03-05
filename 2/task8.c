#include <stdio.h>
#include <stdlib.h>

union Grade {
    int i;
    char c;
};

int main() {
    char t[20];
    union Grade *g;
    int o;
    int N;

    g = (union Grade*)(malloc(N * sizeof(union Grade)));

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%s", &t);
        g[i].i = atof(t);
        if (g[i].i == 0 && (t[0] != '0')) {
            g[i].c = t[0];
            o += 1 << i;
        }
    }
    
    for (int i = 0; i < N; i++) {
	printf("Grade: ");
        if (o & 1) {
            printf("%c\n", g[i].c);
        } else {
            printf("%d\n", g[i].i);
        }
        o >>= 1;
    }

    free(g);

    return 0;
}

