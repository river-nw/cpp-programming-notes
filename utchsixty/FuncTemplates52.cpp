#include <iostream>

int max(int x, int y){
    return (x > y) ? x : y;
}
// this is an overloaded function
double max(double x, double y){
    return (x > y) ? x : y;
}
// this is an overloaded function
char max(char x, char y){
    return (x > y) ? x : y;
}

// now, we will use function templates for the min() function

template <typename T, typename U>

// T min(T x, U y){
auto min(T x, U y){
    return (x < y) ? x : y;
}

int main(){

    // function templates describes what a function looks like.
    // it can be used to generate as many overloaded functions as needed, each using different data types.

    std::cout << max(1, 2) << "\n";
    std::cout << max(1.1, 2.1) << "\n";
    std::cout << max('a', 'b') << "\n";

    std::cout << min(1, 2) << "\n";
    // this will generate an error
    std::cout << min(5.5 , 6.5) << "\n"; // error: no matching

    std::cout << "\n";
    return 0;
}