#include <stdio.h>
#include <stdbool.h>

struct employee_t {
    int id;
    float income;
    bool staff;
};

void initialize_empoyee(struct employee_t *e) {
    e -> id = 0;
    e -> income = 0;
    e -> staff = false;

    return;
}

int main() {
    struct employee_t Ralph;
    
    initialize_empoyee(&Ralph);

    printf("%f\n", Ralph.income);
}