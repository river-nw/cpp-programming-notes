#include <iostream>

class Human{
    public:

        // undefined attributes
        // std::string name;
        // std::string occupation;
        // int age;
        // pre-defined attributes
        std::string name = "Rick";
        std::string occupation = "scientist";
        int age = 70;

        void eat(){
            std::cout << "This person is eating.\n";
        }
        void drink(){
            std::cout << "This person is drinking.\n";
        }
        void sleep(){
            std::cout << "This person is sleeping.\n";
        }
};

int main(){

    // object: a collection of attributes and methods.
    // they can have characteristics and could perform actions.
    // can be used to mimic real world items (ex: Phone, Book, Dog).
    // created from a class which acts as a "blue-print".

    Human human1;
    // human1.name = "Rick";
    // human1.occupation = "scientist";
    // human1.age = 70;

    std::cout << human1.name << "\n";
    std::cout << human1.occupation << "\n";
    std::cout << human1.age << "\n";

    human1.eat();
    human1.drink();
    human1.sleep();

    Human human2;
    human2.name = "Morty";
    human2.occupation = "student";
    human2.age = 15;

    std::cout << human2.name << "\n";
    std::cout << human2.occupation << "\n";
    std::cout << human2.age << "\n";

    human2.eat();
    human2.drink();
    human2.sleep();



    std::cout << "\n";
    return 0;
}