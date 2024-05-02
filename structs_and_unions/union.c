#include <stdio.h>

union myunion {
	int i;
	char c;
};

int main() {
	union myunion u;
	u.i = 0x41424344;
	printf("%x\n", u.c);
}