#include <stdio.h>

struct Employee {
    char name[40], address[40], designation[40];
    long int number, salary;
    int age;
};

int take_employee_num();
void take_employee_details(int n);

int take_employee_num() {
    int n;
    printf("Enter number of employee: ");
    scanf("%d", &n);
    return n;
}

void take_employee_details(int n) {
    
    struct Employee employee[n];
    

    for (int i = 0; i < n; i++) {
        printf("\nEnter name of employee %d: ", i + 1);
        scanf("%[^\n]", employee[i].name);
        printf("\n");

        printf("Enter age of employee %s: ", employee[i].name);
        scanf("%d", &employee[i].age);
        printf("\n");

        printf("Enter address of employee %s: ", employee[i].name);
        scanf("%s",employee[i].address);
        printf("\n");

        printf("Enter mobile number of employee %s: ", employee[i].name);
        scanf("%ld", &employee[i].number);
        printf("\n");

        printf("Enter designation of employee %s: ", employee[i].name);
        scanf("%s", employee[i].designation);
        printf("\n");

        printf("Enter salary of employee %s: ", employee[i].name);
        scanf("%ld", &employee[i].salary);
        printf("\n");

        printf("Details of employee %s are saved", employee[i].name);
        printf("\n");
        
    }


     for (int i = 0; i < n; i++) {
        printf("\n_________________________________________________________________________");
        printf("\nDetails of employee is as follows:");
        printf("\n");

        printf("\nName of employee: %s", employee[i].name);
        printf("\n");

        printf("\nAge of employee: %d", employee[i].age);
        printf("\n");

        printf("\nDesignation of employee: %s", employee[i].designation);
        printf("\n");

        printf("\nSalary of employee: %ld", employee[i].salary);
        printf("\n");

        printf("\nMobile number of employee: %ld", employee[i].number);
        
    }


}

int main(){
    
    take_employee_details(take_employee_num());
    

    

    return 0;
}