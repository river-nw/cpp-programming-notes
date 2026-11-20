#include <iostream>

int main(){

    // sizeof() determines the size in bytes of a: variable, data type, class, objects, etc.
    
    double gpa = 2.5; // 8
    std::string name = "Bro"; // 24
    char grade = 'F'; // 1
    char grades[] = {
        'A', 'B', 'C', 'D', 'E'
    }; // 5
    std::string students[] = {
        "Spongebob", "Patrick", "Squidward",
        "Sandy"
    };

    std::cout << "size of gpa: " << sizeof(gpa) << " bytes\n";
    std::cout << "size of name: " << sizeof(name) << " bytes\n";
    std::cout << "size of grade: " << sizeof(grade) << " byte(s)\n";
    std::cout << "size of grades: " << sizeof(grades) << " byte(s)\n";
    std::cout << "size of elements in grades: " << sizeof(grades)/sizeof(char) << "\n";
    std::cout << "size of elements in students: " << sizeof(students)/sizeof(std::string) << "\n";

    std::cout << "\n";
    return 0;
}