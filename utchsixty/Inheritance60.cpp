#include <iostream>

class Animal{
    public:
        bool alive = true;
    void eat(){
        std::cout << "This animal is eating.\n";
    }
};

class Dog : public Animal{
    public:
        // bool alive = true;
        void bark(){
            std::cout << "The dog goes woof!\n";
        }
};

class Cat : public Animal{
    public:
        void meow(){
            std::cout << "The cat goes meow!\n";
        }
        void eat(){
            std::cout << "nom nom nom...\n";
        }
};

int main(){

    // inheritance: a class can receive attributes and methods from another class.
    // children classes inherit from a parent class
    // it helps reuse similar code found within multiple classes

    Dog dog;
    std::cout << dog.alive << "\n";
    dog.eat();
    dog.bark();

    std::cout << "\n";

    Cat cat;
    std::cout << cat.alive << "\n";
    cat.eat();
    cat.meow();


    std::cout << "\n";
    return 0;
}