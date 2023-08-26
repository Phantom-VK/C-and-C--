
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        int c[10], k = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < k; j++){
                
                if(a[i] == c[j]){
                    
                    break;
                }else{
                    
                    c[j] = a[i];
                    k++;
                    break;
                }
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < k; j++){
                
                if(b[i] == c[j]){
                    
                    break;
                }else{
                    
                    c[j] = b[i];
                    k++;
                    break;
                }
            }
        }

        for(int i = 0; i < k; i++){

            cout<<c[i]<<endl;
        }
        return 0;
    }

};

int main() {
	
	int arr1[10] = {1, 3, 4, 5, 6, 2, 6, 7, 8, 4};
    int arr2[6] = {1, 2, 3, 4, 5, 6};
    Solution sol1;
    sol1.doUnion(arr1, 10, arr2, 6);

	
	return 0;
}
