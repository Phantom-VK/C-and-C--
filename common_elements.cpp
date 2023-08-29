#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> cmn_elements;
    
    int i = 0, j = 0, k = 0;
    int prev_element = INT_MIN;  
    
    while (i < n1 && j < n2 && k < n3)
    {
        if (A[i] == B[j] && B[j] == C[k] && A[i] != prev_element)
        {
            cmn_elements.push_back(A[i]);
            prev_element = A[i];
            i++;
            j++;
            k++;
        }
        else if (A[i] <= B[j] && A[i] <= C[k])
        {
            i++;
        }
        else if (B[j] <= A[i] && B[j] <= C[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }

    return cmn_elements;
};

int main()
{
    Solution sol1;

    int A[] = {1, 5, 10, 20, 40, 80};
    int B[] = {6, 7, 20, 80, 100};
    int C[] = {3, 4, 15, 20, 30, 70, 80, 120};

    int n1 = sizeof(A) / sizeof(A[0]);
    int n2 = sizeof(B) / sizeof(B[0]);
    int n3 = sizeof(C) / sizeof(C[0]);

    vector<int> output = sol1.commonElements(A, B, C, n1, n2, n3);
    int size = output.size();

    for (int i = 0; i < size; i++)
    {
        cout << output[i] << endl;
    }

    return 0;
}
