#include<iostream>
using namespace std;

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        
        int count = 0;

        for(int i = 0; i < n; i++){

            for(int j = i+1; j < n; j++){

                 if(arr[i] + arr[j] == k){

                    count++;
                    cout<<arr[i]<<" "<<arr[j]<<endl;
                }
                }
            }
            cout<<"Total "<<count<<" pairs found";
            return 0;
        }
};

int main(){

Solution sol1;

int array[100];
int n, output, sum;
cout<<"Enter size of array: ";
cin>> n;
cout<<"Enter elements in the array: "<<endl;
for(int i= 0; i < n ; i++){

    cin>>array[i];
}

cout<<"Enter required sum: ";
cin>>sum;

sol1.getPairsCount(array, n, sum);

}