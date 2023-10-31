#include<stdio.h>

void main(){

    int a; //initializing variable 'a' of datatype int 
    int *ptr; //initializing a pointer named ptr by giving an '*' before variable name
    a = 50; //assigning 50 value to variable a  
    ptr = &a; //assigning address of variable a in pointer ptr
    printf("Data at address %p is %d.", ptr, *ptr); // printing address of variable using '%p' and data at that address using '%d'
    
}