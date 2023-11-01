#include<stdio.h>
#include<string.h>

int main(){
    //initializing two strigs with maximum size 100
    char string1[100];
    char string2[100];
    
    char *ptr, *ptr2;//initializing a pointers

    ptr = &string1;//assigning address of string1 variable in pointer
    ptr2 = &string2;//assigning address of string2 variable in pointer
    printf("Enter string 1: ");
    fgets(ptr, sizeof(string1), stdin); // Using fgets to input string1

    printf("Enter string 2: ");
    fgets(ptr2, sizeof(string2), stdin); // Using fgets to input string2

    
    strcat(ptr, ptr2); //adding data of string 2 in result

    printf("Concatinated string is: %s", ptr);

    
}