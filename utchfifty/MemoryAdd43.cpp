#include <iostream>

int main(){

    // a memory address is a location in memory where day is stored
    // a memory address can be accessed with '&' (address-of operator)

    std::string name = "Bro";
    int age = 21;
    bool student = true;

    std::cout << &name << " -size- " << sizeof(name) << "\n";
    std::cout << &age << " -size- " << sizeof(age) << "\n";
    std::cout << &student << " -size- " << sizeof(student) << "\n";

    std::cout << "\n";
    return 0;
}

// you can convert the hexadecimal memory addresses to a decimal number using an online converter:
// 6158478912
// 6158478908
// 6158478907