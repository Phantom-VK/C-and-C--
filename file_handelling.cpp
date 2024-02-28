#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ofstream file1("temp.txt");

    cout << "Enter name: ";
    char name[30];
    cin >> name;

    file1 << name << "\n";

    cout << "Enter price: ";
    float cost;
    cin >> cost;

    file1 << cost << "\n";
    file1.close();

    ifstream file("temp.txt");

    file >> name;

    cout << "Name is: " << name;

    file >> cost;
    cout << "Name is: " << cost;
    file.close();

    return 0;
}