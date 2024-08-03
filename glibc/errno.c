#include <stdio.h>
#include <fcntl.h>

int main() {
    int fd = open("./file-that-doesnt-exist", O_RDONLY);
    if (fd == -1) {
        perror("open");
        return -1;
    }
}