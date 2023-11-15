#include <iostream>

// Base class
class Animal {
public:
    // Constructor
    Animal() {
        std::cout << "Animal constructor called." << std::endl;
    }

    // Virtual method
    virtual void makeSound() {
        std::cout << "Generic animal sound." << std::endl;
    }

    // Destructor
    ~Animal() {
        std::cout << "Animal destructor called." << std::endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    // Constructor
    Dog() {
        std::cout << "Dog constructor called." << std::endl;
    }

    // Overridden method
    void makeSound() override {
        std::cout << "Woof! Woof!" << std::endl;
    }

    // Destructor
    ~Dog() {
        std::cout << "Dog destructor called." << std::endl;
    }
};

int main() {
    // Create an object of the derived class
    Dog myDog;

    // Call the overridden method
    myDog.makeSound();

    // Object goes out of scope, and destructors are called
    return 0;
}
