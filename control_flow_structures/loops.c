#include <stdio.h>
#define MAX_IDS 32

int main() {
    int ids[MAX_IDS] = {0};

    // int i = 0;
    // for (i = 0; i < 32; i++) {
    //     ids[i] = i * i;
    //     printf("%d: %d\n", i, ids[i]);
    // }

    // int i = 0;
    // while (i<32) {
    //     ids[i] = i * i;
    //     printf("%d: %d\n", i, ids[i]);
    //     i++;
    // }

    int i = 0; do {
        ids[i] = i * i;
        printf("%d: %d\n", i, ids[i]);
        i++;
    } while (i<32);
}