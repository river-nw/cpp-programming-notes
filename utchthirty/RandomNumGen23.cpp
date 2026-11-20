#include <iostream>

int main() {

    // pseudo-random: not truly random (but close)
    srand(time(NULL));

    // (rand() * 6) prints a number between 0 to 5, inclusive.
    int num = (rand() % 6) + 1;
    std::cout << "Number between 0 to 6 (inclusive): " << num << "\n"; // prints random number between 0 to 6, inclusive

    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    std::cout << num1 << "\n";
    std::cout << num2 << "\n";
    std::cout << num3 << "\n";


    std::cout << "\n";
    return 0;
}