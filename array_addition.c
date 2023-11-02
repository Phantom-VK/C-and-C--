//Adding two arrays using pointers
#include<stdio.h>

int addArray(int array[], int array2[], int n){

    int *ptr = array;
    int *ptr2 = array2;
    int sum1 = 0, sum2 = 0;
    

    for(int i = 0; i < n; i++){

        sum1 = sum1 + *(ptr+i);
        sum2 = sum2 + *(ptr2+i);
        
    }

    printf("Sum of first arrays is: %d\nSum of second array is: %d\nTotal sum is: %d", sum1, sum2, sum1+sum2);

    for(int i = 0; i < n ; i++){

        printf("\nSum of elements no.%d of both array is: %d ",i+1, *(ptr + i) + *(ptr2 + i));
    }


}

int take_input(){
    
    int arr[100], arr2[100];
    const int size;
    printf("Enter size of arrays: ");
    scanf("%d", &size);
    printf("\nEnter %d elements in array: ", size);
    for(int i = 0; i < size; i++){

        scanf("%d", &arr[i]);

    }

    printf("\nEnter %d elements in array2: ", size);
    for(int i = 0; i < size; i++){

        scanf("%d", &arr2[i]);

    }
    
    addArray(arr, arr2, size);
    
}

int main(){
take_input();
    
}