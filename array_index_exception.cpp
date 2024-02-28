#include <iostream>

using namespace std;

int main() {
    int myArray[10] = {1, 2, 3, 4, 5};

    try {
        int index;
        cout << "Enter an index to access the array: ";
        cin >> index;

        if (index < 0 || index >= 10) {
            throw out_of_range("Error: Index is out of bounds for the array!");
        }

        int value = myArray[index];
        cout << "The value at index " << index << " is: " << value << endl;
    } catch (const out_of_range& error) {
        cout << error.what() << endl;
    }

    return 0;
}
