#include <iostream>

// if you want to write the function before the main block of code
void happyBirthday(){
    std::cout << "Happy Birthday to you\n";
    std::cout << "Happy Birthday to you\n";
    std::cout << "Happy Birthday to you\n";
    std::cout << "Happy Birthday to you\n\n";
}

int main(){

    // functions: a block of reusable code
    happyBirthday();
    happyBirthday();
    happyBirthday();

    std::cout << "\n";
    return 0;
}