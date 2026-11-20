#include <iostream>

int myNum = 3; // global variable

void printNum();

int main(){

    // local variables: declared inside a function or block {}
    // global variable: declared outside of all functions

    // int myNum = 1; // local variable
    printNum();
    std::cout << myNum;
 
    std::cout << "\n";
    return 0;
}

void printNum(){
    // int myNum = 2; // local variable
    std::cout << myNum;
}