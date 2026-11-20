#include <iostream>

int main(){
    // ternary operator is a condensed replacement to a if/else program.
    // condition ? expression1 : expression2 

    int grade = 60;
    grade >= 60 ? std::cout << "You pass!" : std::cout << "You fail!";
    std::cout << "\n";

    int number = 9;
    number % 2 == 1 ? std::cout << "Odd." : std::cout << "Even";
    std::cout << "\n";

    bool hungry = true;
    hungry == true ? std::cout << "You are hungry!" : std::cout << "You are full!";
    std::cout << "\n";
    std::cout << (hungry ? "You are hungry!" : "You are full!");

    std::cout << "\n";
    return 0;
}