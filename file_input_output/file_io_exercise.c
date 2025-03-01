#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

void print_the_flag() {
    char buffer[1024];
    int fd = open("/tmp/flag", O_RDONLY);

    if (fd == -1) {
        perror("Failed to open /tmp/flag");
    }

    ssize_t bytes_read = read(fd, &buffer, sizeof(buffer));
    
    if (bytes_read == -1) {
        perror("Read failed");
        close(fd);
    }

   // Null-terminate the buffer to treat it as a string
    buffer[bytes_read] = '\0';
    printf("%s\n", buffer);

    close(fd);
}

int main() {
	print_the_flag();
    
	return 0;
}