#include<stdio.h>
void main(){

int num1, num2;
char option1;
printf("Enter number1: ");
scanf("%d",&num1);
printf("Enter number2: ");
scanf("%d",&num2);
printf("Enter which operation you want to do:\n'+'Addition\n'-'Subtraction\n'mods'remainder\n'/'Divide\n'*'Multiply\n");
scanf("%s", &option1);
switch (option1)
{
case '+': 
int sum = num1+num2;
printf("%d",sum);
     break;
case '-': printf("%d",num1-num2);
    break;
case '*': printf("%d",num1*num2);
    break;
case '/': printf("%d", num1/num2);
    break;
case 'm': printf("%d",num1%num2);
     break;

default: printf("Invalid operator.");
    break;
}


    
}