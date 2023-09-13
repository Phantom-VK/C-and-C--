#include<stdio.h>
//Code to print element in a string at given index
int main(){

    char my_string[100];
    int index;
    printf("\nEnter a string: ");
    gets(my_string);

    printf("\nEnter index position: ");
    scanf("%d", &index);

    printf("%c", my_string[index]);

    return 0;

}