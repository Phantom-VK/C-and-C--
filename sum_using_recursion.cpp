#include<iostream>

using namespace std;

int sum(int arr[], int size, int i = 0) {
    if (i == size) {
        return 0;  
    }
    
    int add = arr[i] + sum(arr, size, i + 1);  
    return add;
}

int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int output = sum(arr, size);
    cout << "Sum of array elements is: " << output << endl;
}
