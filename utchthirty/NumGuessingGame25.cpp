#include <iostream>

int main(){
    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 10) + 1;

    std::cout << "Number Guessing Game\n";
    do {
        std::cout << "Enter a guess between 1-100: ";
        std::cin >> guess;
        tries++;

        if(guess > num){
            std::cout << "Too high!\n";
        } else if(guess < num){
            std::cout << "Too low!\n";
        } else {
            std::cout << "Correct!\n";
            std::cout << "Total number of tries were: " << tries << "\n";
        }
    } while (guess != num);
    
    std::cout << "\n";
    return 0;
}