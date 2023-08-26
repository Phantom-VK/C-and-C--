#include<iostream>
using namespace std;

int add(int a, int b) {

    return a+b;
}

inline int multi(int a, int b){

    return a*b;
}

inline int sub(int a, int b){

    if(a>b){

        return a-b;
    }else{

        return b-a;
    }
}

inline float division(int a, int b){

    if(a == 0 || b == 0){

        return 0;
    }else{
        float output = a / b;
        return output;
    }
}



int main(){

int num1, num2;
cout<<"Enter first number: ";
cin>>num1;
cout<<"Enter second number: ";
cin>>num2;

    
cout<<"Addition of given two number is: " << add(num1, num2)<<endl;
cout<<endl;
cout<<"Subtraction of given two numbers is: " << sub(num1, num2)<<endl;
cout<<endl;
cout<<"Multiplication of given two numbers is: " << multi(num1, num2)<<endl;
cout<<endl;
cout<<"Division of given two numbers is: " << division(num1, num2)<<endl;
cout<<endl;
}