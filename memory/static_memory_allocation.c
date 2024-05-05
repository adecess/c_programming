#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct employee_t {
    int id;
    float income;
    bool staff;
};

int initialize_empoyee(struct employee_t *e) {
    static int numEmployees = 0;
    numEmployees++;

    e -> id = 0;
    e -> income = 1;
    e -> staff = false;

    return numEmployees;
}

int main() {
    // this value came from the database header
    int n = 4;

    struct employee_t *employees = malloc(sizeof(struct employee_t)*n);
    if (employees == NULL) {
        printf("The allocator failed\n");
        return -1;
    }
    
    for (int i = 0; i < n; i++) {
        int id = initialize_empoyee(&employees[i]);
        printf("New employee, ID is %d\n", id);
    }

    free(employees);
    employees = NULL;
}