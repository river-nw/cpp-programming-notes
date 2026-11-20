#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main(){
    std::string name;
    int age;

    std::cout << "What's your name?: ";
    // std::cin >> name; // this will fail to fetch name if the intput contains spaces. Below is a viable fix.
    // Note: std::ws only removes whitespace that comes before the actual input.
    std::getline(std::cin >> std::ws, name);

    std::cout << "What's your age?: ";
    std::cin >> age;

    std::cout << "Hello " << name << "!" << "\n";
    std::cout << "You are " << age << " years old." << "\n";

    std::cout << "\n";
    return 0;
}