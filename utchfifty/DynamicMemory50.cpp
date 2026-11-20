#include <iostream>

int main(){

    // dynamic memory is the memory that is allocated after the program is already compiled and running.
    // useu the "new" operator to allocate memory in the heap rather than stack.
    // it is useful when we do't know how much memory we will need. it makes our progress more flexible, especially when accepting user input.

    // 1

    int *pNum = NULL;
    pNum = new int;
    *pNum = 21;
    
    std::cout << "address: " << pNum << "\n";
    std::cout << "value: " << *pNum << "\n";

    // whenever you're using the "new" operator, you should use the delete operator after it to clear the memory at that address, to prevent a memory leak.
    delete pNum;
    std::cout << "\n";

    // 2

    char *pGrades = NULL;
    int size;

    std::cout << "how many grades to enter in?: ";
    std::cin >> size;

    pGrades = new char[size];
    for(int i = 0; i < size; i++){
        std::cout << "Enter grade # " << i + 1 << ": ";
        std::cin >> pGrades[i];
    }

    for(int i = 0; i < size; i++){
        std::cout << pGrades[i] << " ";
    }
    
    delete[] pGrades;

    std::cout << "\n";
    return 0;
}