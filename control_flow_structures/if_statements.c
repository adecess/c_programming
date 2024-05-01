#include <stdio.h>

int main() {
    int x = 42;
    // ..get value from the user..

    if (x == 42) {
        printf("You said 42!\n");
    } else if (x == 24) { 
        printf("You said 24!\n");
    } else {
        printf("You said something else!\n");
    }

    return 0;
}