#include <iostream>

int main() {
    // break - break out of a loop
    // continue - skip current iteration

    for (int i = 1; i <= 20; i++)
    {
        if(i == 10){
            continue; // skip the iteration at i=10
        }
        if(i == 15){
            break; // break the loop at i=15
        }
        std::cout << i << "\n";
    }

    std::cout << "\n";
    return 0;
}