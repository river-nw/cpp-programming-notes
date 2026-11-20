#include <iostream>

int main(){
    // arithmetic operators return the result of a specific
    //          arithmetic operation (+, -, *, /, %).

    int students = 20;

    // ways of performing operation on students integer:
    students = students + 1; // 21
    students += 2; // 23
    students++; // post increment
    // ++students; // pre increment

    students = students - 1; // 23
    students -= 2; // 21
    students--; // 20

    students = students * 2; // 40
    students *= 2; // 80

    students = students / 2; // 40
    students /= 2; // 20

    int remainder = students % 2;

    std::cout << students << "\n";
    std::cout << remainder << "\n";

    return 0;
}