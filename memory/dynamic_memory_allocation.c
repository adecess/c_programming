#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct employee_t {
    int id;
    float income;
    bool staff;
};

void initialise_empoyee(struct employee_t *e) {
    e -> id = 0;
    e -> income = 1;
    e -> staff = false;

    return;
}

int main() {
    // this value came from the database header
    int n = 4;

    struct employee_t *employees = malloc(sizeof(struct employee_t)*n);
    if (employees == NULL) {
        printf("The allocator failed\n");
        return -1;
    }
    
    initialise_empoyee(&employees[0]);

    printf("%f\n", employees[0].income);

    free(employees);
    employees = NULL;
}