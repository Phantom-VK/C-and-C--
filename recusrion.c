#include <stdio.h>

int fibonacci(int num);
int fibonacci(int num){

    if(num == 0){

        return 0;
    }
    else if( num == 1){

        return 1;
    }
    else{

        return fibonacci(num-1)+fibonacci(num-2);
    }


}
void main(){

    int number;
    printf("Enter number of terms to be in series: ");
    scanf("%d", &number);

    for(int i =0; i < number; i++){

        printf("%d", fibonacci(i));
    }

    
}