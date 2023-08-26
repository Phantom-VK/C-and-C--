#include<stdio.h>

int getEven(int arr[], int n);
int getOdd(int arr[], int n);
int checkNum(int num);
int takeInput();


int checkNum(int num){

    if(num % 2 == 0){

        return 1;
    }
    else{

        return 0;
    }

}

int getEven(int arr[], int n){

    int count = 0;
    for(int i = 0; i < n; i++){

        int rem = arr[i] % 2;
        if(rem == 0){

            count++;
        }
        else if(checkNum(rem) == 1){

            count++;
        }
    }

    return count;

}

int getOdd(int arr[], int n){

     
     int count = 0;
    for(int i = 0; i < n; i++){
        int rem = arr[i] % 2;
        if(rem != 0){

            count++;
        }
        else if(checkNum(rem) == 0){

            count++;
        }
    }

    return count;

}

int takeInput(){

int even, odd, size;

printf("\nEnter size of array: ");
scanf("%d", &size);
int arr[size];

printf("\nEnter elements in array: ");
for(int i =0; i < size; i++){

    scanf("%d", &arr[i]);

}
even = getEven(arr, size);
odd = getOdd(arr, size);

printf("The number of even numbers in given array is: %d", even);
printf("\nThe number of odd number is gven array is: %d", odd);

}

int main(){

takeInput();


}