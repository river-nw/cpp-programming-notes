#include <iostream>

int main(){

    // null value is a special values that means something has no value.
    // when a pointer is holding a null value, that pointer is not pointing at anything at all (null pointer).

    // nullptr is a keyword that represents a null pointer literal
    // nullptrs are helpful when determining if an address was successfully assigned to a pointer

    int *pointer = nullptr;
    int x = 123;

    // if you dereference a null pointer, it can lead to undefined behavior.
    // if you dereference a pointer that's not assigned a value, that can lead to undefined behavior too.
    pointer = &x;
    if(pointer == nullptr){
        std::cout << "address was not assigned!\n";
    } else {
        std::cout << "address was assigned!\n";
        std::cout << *pointer;
    }

    std::cout << "\n";
    return 0;
}