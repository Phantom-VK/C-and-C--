#include <iostream>

using namespace std;

class Solution
{
public:
    int firstRepeated(int arr[], int n)
    {

        int least_index = INT_MAX;

        for (int i = 0; i < n; i++)
        {

            for (int j = i + 1; j < n; j++)
            {

                if (arr[i] == arr[j] && j < least_index)
                {

                    least_index = i;
                    break;
                }
            }
        }
        if (least_index == INT_MAX)
        {

            return -1;
        }
        else
        {

            return least_index + 1;
        }
    }
};

int main()
{
    Solution sol1;

    int n = 7;
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};

    int output = sol1.firstRepeated(arr, n);
    cout << output;
}

//OR

// class Solution
// {
// public:
//     int firstRepeated(int arr[], int n)
//     {
//         unordered_set<int> seen;

//         for (int i = 0; i < n; i++)
//         {
//             if (seen.find(arr[i]) != seen.end())
//             {
//                 return i + 1;
//             }
//             seen.insert(arr[i]);
//         }

//         return -1;
//     }
// };