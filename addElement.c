#include<stdio.h>

void addElement(int arr[], int size,int index, int num);
void addElement(int arr[], int size,int index, int num){


    for (int i = 0; i < size-index-1; i++)
    {
        arr[size-i-1] = arr[size-i-2];
    }
        arr[index] = num;

    for (int i = 0; i < size; i++)
    {
        printf(" %d", arr[i]);
    }
    
}

int main(){


int array[20] = {1, 2, 3, 4, 5, 6, 7,9,10,11};
int size = sizeof(array)/sizeof(array[0]);
int index = 3;
int num = 123;

addElement(array, size, index, num);


}

//size formula
//n = sizeof(variable_name)/sizeof(variable_name[0]);