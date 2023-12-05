#include <iostream>
using namespace std;
class Animal {


public:
    void eat() {
        std::cout << "Animal is eating." << std::endl;
    }
};

class Cat {
public:
    void meow() {
        std::cout << "Cat is meowing." << std::endl;
    }
};

class Dog : public Animal, public Cat {
public:
    void bark() {
        std::cout << "Dog is barking." << std::endl;
    }
};

int main() {
    Dog dog;
    dog.eat();   // Accessing the eat method from the Animal class
    dog.meow();  // Accessing the meow method from the Cat class
    dog.bark();  // Accessing the bark method from the Dog class
    return 0;
}
