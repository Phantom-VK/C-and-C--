#include <stdio.h>

struct Student {
    char name[40];
    long int reg;
    int mark_DS;
    int mark_DSD;
    int mark_DM;
    int mark_IC;
    int mark_OOP;
};

int take_student_num();
void take_student_mark(int n);


int take_student_num() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    return n;
}

void take_student_mark(int n) {
    
    struct Student Student[n];
    int total;
    float percentage;
    

    for (int i = 0; i < n; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        scanf(" %[^\n]", Student[i].name);
        printf("Enter marks of DS out of 30: ");
        scanf("%d", &Student[i].mark_DS);
        printf("Enter marks of DM out of 30: ");
        scanf("%d", &Student[i].mark_DM);
        printf("Enter marks of DSD out of 30: ");
        scanf("%d", &Student[i].mark_DSD);
        printf("Enter marks of IC out of 30: ");
        scanf("%d", &Student[i].mark_IC);
        printf("Enter marks of OOP out of 30: ");
        scanf("%d", &Student[i].mark_OOP);
    }


     for (int i = 0; i < n; i++) {
        printf("\n_________________________________________________________________________");
        printf("\n%s got marks as follows:", Student[i].name);
        printf("\nMarks of DS: %d", Student[i].mark_DS);
        printf("\nMarks of DSD: %d", Student[i].mark_DSD);
        printf("\nMarks of DM: %d", Student[i].mark_DM);
        printf("\nMarks of IC: %d", Student[i].mark_IC);
        printf("\nMarks of OOP: %d\n", Student[i].mark_OOP);
        total = Student[i].mark_DS + Student[i].mark_DSD + Student[i].mark_DM + Student[i].mark_IC + Student[i].mark_OOP;
        percentage = (total *100)/150;
        printf("\nTotal marks = %d",total);
        printf("\nPerecentage = %f", percentage);
        
    }


}



int main(){
    
    take_student_mark(take_student_num());
    

    

    return 0;
}
