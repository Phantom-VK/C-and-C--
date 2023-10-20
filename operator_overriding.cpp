#include <iostream>
#include<stdlib.h>
using namespace std;
class MyInteger {
private:
    int value;

public:
    MyInteger(int val) : value(val) {}

    
    MyInteger operator++() {
        ++value;
        return value;
    }

    
    MyInteger operator++(int) {
        MyInteger temp = value;
        ++value;
        return temp;
    }

    
    MyInteger operator--() {
        --value;
        return value;
    }

    
    MyInteger operator--(int) {
        MyInteger temp = value;
        --value;
        return temp;
    }

    
    MyInteger operator-() {
        return MyInteger(-value);
    }

    

    int getValue() {
        return value;
    }
};

class Complex {
private:
    int real;
    int imag;

public:
    Complex(int r, int i) : real(r), imag(i) {}

    
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    MyInteger num(5);
    Complex num1(3, 2);
    Complex num2(6, 1);

    Complex sum = num1 + num2; 
    Complex diff = num1 - num2;
    
    
    MyInteger result1 = ++num; 
    MyInteger result2 = num++; 
    MyInteger result3 = --num;
    MyInteger result4 = num--; 
    MyInteger result5 = -num;  

   cout << "Pre-increment: " << result1.getValue() <<endl;
   cout << "Post-increment: " << result2.getValue() <<endl;
   cout << "Pre-decrement: " << result3.getValue() <<endl;
   cout << "Post-decrement: " << result4.getValue() <<endl;
   cout << "Negation: " << result5.getValue() <<endl;
   sum.display();
   diff.display();
   

    return 0;
}
