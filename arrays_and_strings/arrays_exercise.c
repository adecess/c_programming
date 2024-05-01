#include <stdio.h>

int main(int argc, char **argv) {
    int my_array[10] = {0}; // create an array of 10 integers 
    my_array[3] = 2; // set the 4th element to 2
    printf("%d\n", my_array[3]);// print the 4th element
    return 0;
}