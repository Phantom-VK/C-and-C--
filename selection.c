#include<stdio.h>
void main(){

int size, i, j, minIndex, temp;

printf("\nEnter size of array: ");
scanf("%d", &size);
int arr[size];

printf("Enter array elements: \n");

for(i = 0; i <= size; i++){

scanf("%d",&arr[i]);
    
}

for(i = 0; i < size; i++){

    minIndex = i;
    for(j = i+1; j < size; j++){

        if(arr[j]<arr[minIndex]){

            minIndex = j;
        }
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;

    }
}
printf("\nSorted elements are: ");
for(i = 0; i <= size; i++){
   
    printf("%d ",arr[i]);


}

}