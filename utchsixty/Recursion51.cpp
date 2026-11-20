#include <iostream>

void walk(int steps);

int main(){

    // recursion is a programming technique where a funciton invokes itself from within.
    // it breaks a complex concept into a repeatable single step
    // it can be approached either iteratively or recursively (iterative or recursive)
    // advantages of recursion: less code and cleaner. it's useful for sorting and searching algorithms.
    // disadvantages: it uses more memory, slower.

    walk(100);
    
    std::cout << "\n";
    return 0;
}

void walk(int steps){
    // for(int i = 0; i < steps; i++){
    //     std::cout << "You take a step!\n";
    //     walk(steps - 1);
    // }
    if(steps > 0){
        std::cout << "You take a step!\n";
        walk(steps - 1);
    }
}