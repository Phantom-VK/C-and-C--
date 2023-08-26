#include <stdio.h>

// Definition of a structure called 'Patient'
struct Patient {
    int id;
    char name[50];
    char bloodgrp[3];
    int age;
};

int main() {
    int n;

    printf("How many patient's data do you want to enter?: ");
    scanf("%d", &n);

    
    struct Patient patients[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter id of patient %d: ", i + 1);
        scanf("%d", &patients[i].id);

        printf("Enter name of patient %d: ", i + 1);
        scanf(" %[^\n]", patients[i].name);  

        printf("Enter blood group of patient %d: ", i + 1);
        scanf(" %s", patients[i].bloodgrp);

        printf("Enter age of patient %d: ", i + 1);
        scanf("%d", &patients[i].age);
    }

    printf("\nPatients above the age of 15:\n");
    for (int i = 0; i < n; i++) {
        if (patients[i].age > 15) {
            printf("\nPatient[%d] Name: %s", i + 1, patients[i].name);
            printf("\nPatient[%d] ID: %d", i + 1, patients[i].id);
            printf("\nPatient[%d] Age: %d", i + 1, patients[i].age);
            printf("\nPatient[%d] Blood Group: %s", i + 1, patients[i].bloodgrp);
        }
    }

    return 0;
}
