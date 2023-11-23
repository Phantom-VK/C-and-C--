#include <iostream>
using namespace std;

void add_element(int arr[],int x, int y)
{
    arr[x] = y;
}
int main()
{

    int size, position, element;

    cout << "Enter size of array: ";
    cin >> size;

    int array[size];
    cout << "Enter position at which you want to add an element: ";

    cin >> position;

    cout << "Enter an element to place at position " << position;
    cin >> element;

    try
    {
        add_element(array, position,element);
    }
    catch ()
    {
        cout << "Array index out of bounds occurred!" << '\n';
    }
}