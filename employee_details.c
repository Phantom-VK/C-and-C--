#include <stdio.h>

struct Employee {
    char name[40], address[40], designation[40];
    long long int number, salary;
    int age;
};

int take_employee_num();
void take_employee_details(int n);

int take_employee_num() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    return n;
}

void take_employee_details(int n) {
    struct Employee employee[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter name of employee %d: ", i + 1);
        scanf(" %[^\n]", employee[i].name);
        
        printf("Enter age: ");
        scanf("%d", &employee[i].age);

        printf("Enter address: ");
        scanf(" %[^\n]", employee[i].address);

        printf("Enter mobile number: ");
        scanf("%lld", &employee[i].number);

        printf("Enter designation: ");
        scanf(" %[^\n]", employee[i].designation);

        printf("Enter salary: ");
        scanf("%lld", &employee[i].salary);

        printf("Details of employee %s are saved\n", employee[i].name);
    }

    printf("\n_________________________________________________________________________\n");
    printf("Details of employees are as follows:\n");

    for (int i = 0; i < n; i++) {
        printf("\nName of employee: %s", employee[i].name);
        printf("\nAge of employee: %d", employee[i].age);
        printf("\nDesignation of employee: %s", employee[i].designation);
        printf("\nSalary of employee: %lld", employee[i].salary);
        printf("\nMobile number of employee: %lld\n", employee[i].number);
    }
}

int main() {
    take_employee_details(take_employee_num());
    return 0;
}
