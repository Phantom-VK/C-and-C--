#include <iostream>
using namespace std;

class Calci
{

    long int a, b;

public:
    void take_input();
    inline int add();
    inline int sub();
    inline float div();
    inline int multi();
};
inline int Calci::add()
{

    return a + b;
}
inline int Calci::sub()
{
    if (a > b)
    {
        return a - b;
    }
    else
    {
        return b - a;
    }
}
inline float Calci::div()
{

    if (a == 0 || b == 0)
    {

        cout << "\nYou can not divide zero or by zero!"<<endl;
    }
    else
    {

        cout << "Division of given numbers is: "<<a / b<<endl;;
    }
    return 0;
}

inline int Calci::multi()
{

    return a * b;
}
void Calci::take_input()
{

    int flag = 1, choice;

    do
    {   
        cout << "\nEnter which operation you want to perform\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Exit\nEnter choice number: ";
        cin >> choice;
        if(choice != 5){
            cout << "\nEnter number 1: ";
            cin >> a;
            cout << "\nEnter number 2: ";
            cin >> b;}
    


        switch (choice)
        {
        case 1:
            cout << "Sum of given numbers is: " << add() << endl;
            break;
        case 2:
            cout << "Difference between two numbers is: " << sub() << endl;
            break;
        case 3:
            cout << "Multiplication of given numbers is: " << multi() << endl;
            break;
        case 4:
            div();
            break;
        case 5:
            cout<<"Calculator turned off!";
            flag = 0;
            break;

        default:
            break;
        }
    } while (flag == 1);
}

int main(){

    Calci calculator1;
    calculator1.take_input();
}