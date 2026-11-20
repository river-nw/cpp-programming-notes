#include <iostream>

int main(){
    // if statements let you do something if the
    //               condition provided is true.

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 18){
        std::cout << "Welcome to the site!";
    } else if(age < 0) {
        std::cout << "Invalid age.";
    } else {
        std::cout << "You are not eligible to access the site.";
    }
    
    std::cout << "\n";
    return 0;
}