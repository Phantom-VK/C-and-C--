#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> duplicates(int arr[], int n) {
        unordered_map<int, int> freqMap;
        vector<int> result;

        for (int i = 0; i < n; i++) {
            freqMap[arr[i]]++;
        }

        for (auto it : freqMap) {
            if (it.second > 1) {
                result.push_back(it.first);
            }
        }

        if (result.empty()) {
            result.push_back(-1);
        }

        sort(result.begin(), result.end());

        return result;
    }
};

int main() {
    Solution sol;

    int arr[] = {4, 3, 2, 7, 8, 2, 1, 4, 5, 5, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> result = sol.duplicates(arr, n);

    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}
