#include<stdio.h>
void main(){

int size, i, j;

printf("\nEnter size of array: ");
scanf("%d", &size);
int arr[size];

printf("Enter array elements: \n");

for(i = 0; i <= size; i++){

scanf("%d",&arr[i]);
    
}

for(i = 0; i <= size; i++){

    for(j = 0; j <= size-i-1 ; j++){

        if(arr[j]>arr[j+1]){

            int temp;
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1]=temp;

        }

    }

}
 printf("\nSorted elements are: ");
for(i = 0; i <= size; i++){
   
    printf("%d",arr[i]);


}

}