#include <iostream>

using namespace std;

// Function to perform division and handle divide by zero exception
void divideNumbers(int a, int b) {
    try {
        if (b == 0) {
            throw runtime_error("Error: Cannot divide by zero!");
        }
        double result = a / b;
        cout << "Result of " << a << " / " << b << " is: " << result << endl;
    } catch (const runtime_error& error) {
        cout << error.what() << endl;
    }
}

int main() {
    // Example: Divide by zero
    int num1, num2;
    cout<<"Enter dividend number: "<<endl;
    cin>>num1;
    cout<<"Enter divisor number: "<<endl;
    cin>>num2;
    divideNumbers(num1, num2);

    return 0;
}
