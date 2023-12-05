#include<stdio.h>
void getEven(int arr[], int n);
void getOdd(int arr[], int n);
int checkNum(int num);
void takeInput();

int check_num(int n){

    if(n % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}

void getEven(int arr[], int size){

    printf("\nEven numbers in array are: ");
    for(int i = 0; i < size; i++){

        if(check_num(arr[i])){

            printf("%d\t", arr[i]);
        }
    }

}

void getOdd(int arr[], int size){

    printf("\nOdd numbers in array are: ");
    for(int i = 0; i < size; i++){

        if(!check_num(arr[i])){

            printf("%d\t", arr[i]);
        }
    }

}

void takeInput(){

int size;

printf("\nEnter size of array: ");
scanf("%d", &size);
int arr[size];

printf("\nEnter elements in array: ");
for(int i =0; i < size; i++){

    scanf("%d", &arr[i]);

}
getEven(arr, size);
getOdd(arr, size);


}

int main(){

takeInput();


}



