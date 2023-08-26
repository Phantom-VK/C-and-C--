#include<stdio.h>
void main(){
    int even_sum = 0, odd_sum = 0;
    for(int i = 0; i<=100; i++){
        if(i%2==0){
             even_sum += i;
        }else{
             odd_sum += i;
        }
    }
    printf("The sum of even numbers is %d\n",even_sum);
    printf("The sum of odd numbers is %d",odd_sum);
    
    }