#include<stdio.h>

void main(){

    int a;
    int *ptr;
    a = 50;
    ptr = &a;
    printf("%d",a);
    printf("\n%d",*ptr);
}