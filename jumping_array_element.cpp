#include<iostream>
using namespace std;

int get_steps(int arr[], int n) {
    int current_index = 0, jump = 0;

    
    while (current_index < n - 1) {
        int max_reach = 0;
        int new_index = current_index;

        
        for (int i = current_index + 1; i <= current_index + arr[current_index]; i++) {
            
            if (i < n && i + arr[i] > max_reach) {
                max_reach = i + arr[i];
                new_index = i;
            }
        }

        
        current_index = new_index;
        jump++;
    }

    
    return jump;
}


int main(){

int array[] = {2, 3, 1, 1, 4};
int size = sizeof(array) / sizeof(array[0]);

int output = get_steps(array, size);
cout<<output;
    
}