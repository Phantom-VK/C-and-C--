#include <iostream>
using namespace std;

class Calculate
{

    double b, h;

public:
    // Default
    Calculate() : b(10.0), h(20.0)
    {

        cout << "\nThis is copy constructor and" << endl;
        
    }
    // Parameterized
    Calculate(int base, int height) : b(base), h(height)
    {
        cout << "\nThis is parameterized constructor and" << endl;
        
    }
    // Copy
    Calculate(const Calculate &obj1) : b(obj1.b), h(obj1.h)
    {

        cout << "\nThis is copy constructor and" << endl;
        
    }

    void display(){
        cout << "Area of triangle using given values is: " << 0.5 * b * h << endl;

    }

};

int main()
{

    Calculate defaultTriangle;
    defaultTriangle.display();

    Calculate triangle2(35.0, 50.0);
    triangle2.display();

    Calculate triangle3 = triangle2;
    triangle3.display();
}
