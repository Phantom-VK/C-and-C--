#include <iostream>
#include <math.h>
using namespace std;

class Solution {
public:
    int sqr(int n) {
        return n * n;
    }

    int min(int n, int m) {
        if (n > m) {
            return m;
        } else {
            return n;
        }
    }

    int max_water(int height[], int size) {
        int max_area = 0;
        for (int i = 0; i < size; i++) {
            int height1 = height[i];
            for (int j = i + 1; j < size; j++) {
                int height2 = height[j];
                int length = sqrt(sqr((j - i)) + sqr((height[j] - height[i])));
                int min_height = min(height1, height2);
                int area = length * min_height;
                if (area > max_area) {
                    max_area = area;
                }
            }
        }
        return max_area;
    }
};

int main() {
    Solution sol1;
    int array[] = {4, 3, 2, 1, 4};
    int size = sizeof(array) / sizeof(array[0]);
    int output = sol1.max_water(array, size);
    cout << output;
}
