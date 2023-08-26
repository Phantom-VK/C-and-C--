#include <stdio.h>

int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == target) {
            return mid;  // Return the index if the target is found
        }
        else if (arr[mid] < target) {
            low = mid + 1;  // Continue searching in the right half
        }
        else {
            high = mid - 1;  // Continue searching in the left half
        }
    }
    
    return -1;  // Return -1 if the target is not found
}

int main() {
    int arr[] = {1, 2, 4, 5, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 4;
    
    int result = binarySearch(arr, 0, n - 1, target);
    
    if (result == -1) {
        printf("Target not found\n");
    } else {
        printf("Target found at index %d\n", result);
    }
    
    return 0;
}
