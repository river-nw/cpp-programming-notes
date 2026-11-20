#include <iostream>

void happyBirthday(std::string bdBoy, int age); // define the function first

int main(){

    // functions: a block of reusable code

    std::string name = "River";
    int age = 21;

    happyBirthday(name, age);

    std::cout << "\n";
    return 0;
}

// if you want to write the function after the main block of code
void happyBirthday(std::string bdBoy, int age){
    std::cout << "Happy Birthday to you\n " << bdBoy << "\n";
    std::cout << "Happy Birthday to you\n " << bdBoy << "\n";
    std::cout << "Happy Birthday dear\n " << bdBoy << "\n";
    std::cout << "Happy Birthday to you\n" << bdBoy << "!\n";
    std::cout << "You are now " << age << " years old!" << "\n";
}