#include <stdio.h>
#include <stdbool.h>

#define MAX_IDS 32
#define MAX_EMPLOYEES 1000

struct employee_t {
    int id;
    char firstname[64];
    char lastname[64];
    float income;
    bool ismanager;
};

int main() {
    struct employee_t employees[MAX_EMPLOYEES];
    
    employees[0].ismanager = true;
    employees[0].income = 100;

    int i = 1;
    for (i = 1; i < MAX_EMPLOYEES; i++) {
        employees[i].income = 1;
        employees[i].ismanager = false;
    }

    printf("%f\n", employees[0].income);
    printf("%f\n", employees[10].income);
}