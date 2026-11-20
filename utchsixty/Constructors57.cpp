#include <iostream>

class Student{
    public:

        std::string name;
        int age;
        double gpa;
    
    // Student(std::string x, int y, double z){
    //     name = x;
    //     age = y;
    //     gpa = z;
    // }
    Student(std::string name, int age, double gpa){
        this -> name = name;
        this -> age = age;
        this -> gpa = gpa;
    }
};

int main(){

    // constructor: a special method that is automatically called when an object is instantiated.
    // it is useful for assigning values to attributes as arguments.

    Student student1("Spongebob", 25, 3.2);
    Student student2("Patrick", 40, 1.5);
    Student student3("Sandy", 21, 4.0);

    std::cout << student1.name << "\n";
    std::cout << student1.age << "\n";
    std::cout << student1.gpa << "\n";

    std::cout << student2.name << "\n";
    std::cout << student2.age << "\n";
    std::cout << student2.gpa << "\n";

    std::cout << student3.name << "\n";
    std::cout << student3.age << "\n";
    std::cout << student3.gpa << "\n";

    std::cout << "\n";
    return 0;
}