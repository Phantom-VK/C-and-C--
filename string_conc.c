#include<stdio.h>
#include<string.h>

int main(){
    //initializing two strigs with maximum size 100
    char string1[100];
    char string2[100];
    
    int *ptr, *ptr2;//initializing a pointers

    ptr = string1;//assigning address of string1 variable in pointer
    ptr2 = string2;//assigning address of string2 variable in pointer
    printf("Enter srting 1: ");
    gets(ptr);//Taking input in string 1 using gets funtion
    printf("Enter string 2: ");
    gets(ptr2);//Taking input in string 2 using gets funtion

    
    strcat(ptr, ptr2); //adding data of string 2 in result

    printf("Concatinated string is: %s", ptr);

    
}