#include<stdio.h>
#include<stdlib.h>

int division(int a, int b){

    if(a == 0){return 0;}
    else if(b == 0){
        printf("Can not divide by zero!");
    }else{
        return a/b;
    }
}

int power(int a, int b){
    int ans = 1;
    for(int i = 0; i <=b; i++){
        ans*=a;
    }
    return ans;
}

int mod(int a, int b){
    return a%b;
}

int main(){
    char choice;
    int num1, num2;
    printf("Which of the following operation you want to perform?");
    while(1){
        printf("\nEnter 'D' for dividion." );
        printf("\nEnter 'P' for power." );
        printf("\nEnter 'M' for modulus." );
        printf("\nEnter 'N' for exiting the program." );
        scanf("%c", &choice);
    }

    if(choice == 'D'){
        printf("\nEnter a number:" );
        scanf("%d", &num1);
        printf("\nEnter dividor to divide first number:" );
        scanf("%d", &num2);
        printf("\nAnswer is :%d", division(num1, num2) );
    }else if(choice == 'P'){
        printf("\nEnter a number:" );
        scanf("%d", &num1);
        printf("\nEnter power:" );
        scanf("%d", &num2);
        printf("\nAnswer is :%d", power(num1, num2) );
    }else if(choice == 'M'){

        printf("\nEnter first number:" );
        scanf("%d", &num1);
        printf("\nEnter dividor to divide first number:" );
        scanf("%d", &num2);
        printf("\nAnswer is :%d", mod(num1, num2) );
    }else if(choice == 'N'){
        printf("\nProgram Ended!");
        exit(0);
    }

    return 0;
}