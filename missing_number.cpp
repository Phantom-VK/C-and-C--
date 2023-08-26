#include<iostream>
using namespace std;


class Solution{
  public:
    int missingNumber(int array[], int n) {
        int sum1 = 0, sum2 = 0;
        
        for(int i = 1; i <= n; i++){
            
            sum1 = sum1 + i;
        }
        
        for(int i = 0; i< n-1; i++){
            
            sum2 = sum2 + array[i];
        }
        
        
        cout<<"Missing number is : "<<sum1-sum2<<endl;
        return 0;
    }
};

int main(){

Solution sol1;

int array[100];
int n, size, output;
cout<<"Enter size of array: ";
cin>> n;
cout<<"Enter 1 to "<< n-1 <<" elements in the array without repeating: "<<endl;
for(int i= 0; i < n-1 ; i++){

    cin>>array[i];
}

sol1.missingNumber(array, n);

}