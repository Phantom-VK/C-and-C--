#include<stdio.h>

#define MAX_SIZE 100
int array1[MAX_SIZE];
int size, *arrayPtr =  array1;

int addArrayElements(){
    int sum = 0;
    for(int i = 0; i < size; i++){

        sum += array1[i];
        
    }
    return sum;
}


int main(){
printf("Enter size of an array: ");
scanf("%d", &size);

printf("Enter %d array elements: ", size);
for (int i = 0; i < size; i++)
{
    scanf("%d", &array1[i]);
}

for (int i = 0; i < size; i++)
{
    printf("\nElement at %d position is %d (Stored at memory location : %p)", i, *arrayPtr,arrayPtr);
    *arrayPtr++;
}

printf("\nSum of all elements of array is: %d", addArrayElements());

}