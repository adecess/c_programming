#include <stdio.h>

int main() {
	int ids[10] = {0}; // type name[size] = {definition}
	printf("%d\n", ids[0]);
	ids[3] = 0x41; // set the 4th element inside the array to 0x41
	printf("%d\n", ids[3]); // print the 4th element in the array
}