#include <iostream>

int main(){
    // type conversion is conversion of a value of one data type to another
    // implicit: automatic
    // explicit: precede value with one data type

    double x = (int) 3.14;
    std::cout << x << "\n"; // 3

    std::cout << (char) 100 << "\n"; // d

    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;
    std::cout << score << "%" << "\n";

    std::cout << "\n";
    return 0;
}