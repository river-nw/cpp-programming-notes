#include <iostream>

int main(){

    // array is a data structure that can hold multiple values. the multiple values are accessed by index number.
    // in simple words, it is a kind of variable that holds multiple values.

    // declaring an array with values
    std::string car[] = {
        "Corvette", "Mustang", "Camry"
    };

    // updating or assigning an array
    car[0] = "Camaro";

    //declaring an array with size
    std::string cars[3];

    std::cout << car[0] << "\n";
    std::cout << car[1] << "\n";
    std::cout << car[2] << "\n";

    double prices[] = {
        5.00, 7.50, 9.99, 15.00
    };

    std::cout << prices[0] << "\n";
    std::cout << prices[1] << "\n";
    std::cout << prices[2] << "\n";
    std::cout << prices[3] << "\n";

    std::cout << "\n";
    return 0;
}