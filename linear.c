#include<stdio.h>
int main(){

int size, i, target, flag = 0;

printf("\nEnter size of array: ");
scanf("%d", &size);
int arr[size];

printf("Enter array elements: \n");

for(i = 0; i < size; i++){

scanf("%d",&arr[i]);
    
}
printf("\nEnter target number you want to find: ");
scanf("%d",&target);

for(i = 0; i < size; i++){

    if(arr[i] == target){

        printf("The elemrnt is at index position %d",i);
        
    }
    

}
}