#include <iostream>

int main(){

    // fill() function fills a range of element with a specified value
    // std::fill(begin, end, value)

    const int SIZE = 99;
    std::string foods[SIZE];

    fill(foods, foods + (SIZE/3), "pizza");
    fill(foods + (SIZE/3), foods + (SIZE/3)*2, "hamburger");
    fill(foods + (SIZE/3)*2, foods + SIZE, "hotdog");

    int count = 1;
    for(std::string food:foods){
        std::cout << count << ": " << food << "\n";
        count++;
    }

    std::cout << "\n";
    return 0;
}