#include <iostream>

int main(){

    std::string cars[][3] = {
        {"Mustang", "Escape", "F-150"},
        {"Corvette", "Equinox", "Silverado"},
        {"Challenger", "Durango", "Ram 1500"}
    };
    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);

    for(int i = 0; i <= rows-1; i++){
        for(int j = 0; j <= columns-1; j++){
            std::cout << cars[i][j] << " ";
        }
        std::cout << "\n";
    }


    std::cout << "\n";
    return 0;
}