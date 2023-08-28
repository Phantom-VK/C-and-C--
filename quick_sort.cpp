#include<iostream>
using namespace std;

//Har Har Mahadev!!!

void swap(int arr[], int i, int j){

    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int l, int r){

    int pi = arr[r];
    int i = l-1;

    for(int j = l; j < r; j++){

        if(arr[j]<pi){
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i+1, r);
    return i+1;
}
void quicksort(int arr[], int l, int r){

if(l<r){
    int pi = partition(arr, l, r);
    quicksort(arr, l, pi-1);
    quicksort(arr, pi+1, r);

}
}

int main(){

int array[] = {2, 3, 4, 8, 1, 5, 11, 16};
int size = sizeof(array) /sizeof(array[0]);

quicksort(array,0, size - 1);

for (int i = 0; i < size; i++)
{
    cout<<array[i]<<" ";
}


}