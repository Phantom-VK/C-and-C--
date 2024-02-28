#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct Person {
    char name[50];
    int age;
    double height;
};

int main() {
    // Create and write data to a binary file
    ofstream outFile("people.dat", ios::binary | ios::out);

    if (!outFile.is_open()) {
        cerr << "Error: Unable to open file for writing." << endl;
        return 1;
    }

    vector<Person> people = {
        {"John Doe", 25, 1.75},
        {"Jane Smith", 30, 1.65},
        {"Bob Johnson", 22, 1.80}
    };

    outFile.write(reinterpret_cast<char*>(&people[0]), sizeof(Person) * people.size());
    outFile.close();

    // Read data from the binary file
    ifstream inFile("people.dat", ios::binary | ios::in);

    if (!inFile.is_open()) {
        cerr << "Error: Unable to open file for reading." << endl;
        return 1;
    }

    vector<Person> readPeople(people.size());
    inFile.read(reinterpret_cast<char*>(&readPeople[0]), sizeof(Person) * readPeople.size());
    inFile.close();

    // Display the read data
    cout << "Read data from the binary file:" << endl;
    for (const auto& person : readPeople) {
        cout << "Name: " << person.name << ", Age: " << person.age << ", Height: " << person.height << endl;
    }

    return 0;
}
