#include <stdio.h>
#include <string.h>

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
        printf("\nEnter details for employee %d:\n", i + 1);

        printf("Name: ");
        getchar(); 
        fgets(employee[i].name, sizeof(employee[i].name), stdin);

        printf("Age: ");
        scanf("%d", &employee[i].age);

        printf("Address: ");
        getchar(); 
        fgets(employee[i].address, sizeof(employee[i].address), stdin);

        printf("Mobile number: ");
        scanf("%lld", &employee[i].number);

        printf("Designation: ");
        getchar(); 
        fgets(employee[i].designation, sizeof(employee[i].designation), stdin);

        printf("Salary: ");
        scanf("%lld", &employee[i].salary);

        printf("Details for employee %s saved\n", employee[i].name);
    }

    printf("\n_________________________________________________________________________\n");
    printf("Details of employees are as follows:\n");

    for (int i = 0; i < n; i++) {
        printf("\nName: ");
        fputs(employee[i].name, stdout);

        printf("Age: %d", employee[i].age);
        printf("\nDesignation: ");
        fputs(employee[i].designation, stdout);

        printf("Salary: %lld", employee[i].salary);
        printf("\nMobile number: %lld\n", employee[i].number);
    }
}

int main() {
    take_employee_details(take_employee_num());
    return 0;
}
