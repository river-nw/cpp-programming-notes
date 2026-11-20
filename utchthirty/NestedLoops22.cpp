#include <iostream>

int main() {
    
    // for(int i = 1; i <= 3; i++){
    //     for(int j = 1; j <= 10; j++){
    //         std::cout << j << ' ';
    //     }
    //     std::cout << "\n";
    // }

    int rows;
    int columns;
    char symbol;        

    std::cout << "Number of rows?: ";
    std::cin >> rows;

    std::cout << "Number of columns?: ";
    std::cin >> columns;

    std::cout << "Enter the symbol for use: ";
    std::cin >> symbol;

    for (int i = 1; i <= rows; i++){
        for (int j = 0; j <= columns; j++){
            std::cout << symbol;   
        }
        std::cout << "\n";
    }

    std::cout << "\n";
    return 0;
}