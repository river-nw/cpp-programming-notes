#include <iostream>

int main(){

    // foreach loop is a loop that eases the traversal over an iterable data set

    std::string students[] = {
        "Spongebob", "Patrick", "Squidward"
    };
    int grades[] = {
        65, 72, 81, 93
    };

    for(std::string student : students){
        std::cout << student << "\n";
    }
    for(int grade:grades){
        std::cout << grade << "\n";
    }
    
    std::cout << "\n";
    return 0;
}