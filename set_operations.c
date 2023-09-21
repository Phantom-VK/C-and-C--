#include<stdio.h>

#define MAX_SIZE 10
#define UNIVERSAL_SET {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}


void doUnion(int a[], int n, int b[], int m) {
    int c[MAX_SIZE]; 
    int k = 0; 

    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < k; j++) {
            if (a[i] == c[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            c[k] = a[i];
            k++;
        }
    }

    
    for (int i = 0; i < m; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < k; j++) {
            if (b[i] == c[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            c[k] = b[i];
            k++;
        }
    }

    printf("\nUnion of two sets is:\n{");
    for (int i = 0; i < k; i++) {
        printf(" %d", c[i]);
    }
    printf("}");
}

void difference(int a[], int n, int b[], int m) {
    printf("\n{");
    int isDifferent;

    for (int i = 0; i < n; i++) {
        isDifferent = 1; 

        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                isDifferent = 0; 
                break;
            }
        }

        if (isDifferent == 1) {
            printf(" %d", a[i]);
        }
    }

    printf("}\n");
}
void intersect(int a[], int n, int b[], int m){

        printf("\nIntersection of two sets is:\n{");
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                
                if(a[i] == b[j]){
                    
                    printf(" %d", a[i]);
                }
            }
        }
        printf("}");
        
}

void take_input(){

    int array1[MAX_SIZE];
    int array2[MAX_SIZE];
    int size1, size2, choice, exit = 0;
    printf("universal set: U = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}");

   
    printf("\nEnter size of set A: ");
    scanf("%d", &size1);
    printf("\nEnter %d elements in set A without repeating elements: ", size1);
     for (int i = 0; i < size1; i++)
    {   
        scanf("%d", &array1[i]);
        
    }

    printf("\nEnter size of set B: ");
    scanf("%d", &size2);
    printf("\nEnter %d elements in set B without repeating elements: ", size2);
    for (int i = 0; i < size2; i++)
    {   
        scanf("%d", &array2[i]);
        
    }
     while(exit != 1){
    printf("\nEnter which operatiON you want to perform:\n1)Union\n2)Intersection\n3)Difference(A-B)\n4)Take inputs again\n5)exit\nEnter number: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        doUnion(array1, size1, array2, size2);
        break;

    case 2:
        intersect(array1, size1, array2, size2);
        break;

    case 3:
        difference(array1, size1, array2, size2);
        break;
    case 4:
        take_input();
        break;
    case 5:
        exit =1;
        printf("\nProgram ended successfully!");
        break;
    
    default:
        break;
    }}
}



int main(){

    take_input();
    

}