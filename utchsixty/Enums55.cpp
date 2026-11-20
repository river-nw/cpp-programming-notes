#include <iostream>

enum Day {
    sunday = 0,
    monday = 1,
    tuesday = 2,
    wednesday = 3,
    thursday = 4,
    friday = 5,
    saturday = 6
};

int main(){

    // enums: a user-defined data type that consists of paired named-integer constants.
    // GREAT if you have a set of potential options.

    Day today = sunday;

    switch(today){
        // instead of case sunday, you can also use case 0
        case sunday:
            std::cout << "It is a Sunday\n";
            break;
        case monday:
            std::cout << "It is a Monday\n";
            break;
        case tuesday:
            std::cout << "It is a Tuesday\n";
            break;
        case wednesday:
            std::cout << "It is a Wednesday\n";
            break;
        case thursday:
            std::cout << "It is a Thursday\n";
            break;
        case friday:
            std::cout << "It is a Friday\n";
            break;
        case saturday:
            std::cout << "It is a Saturday\n";
            break;
        default:
            break;
    }


    std::cout << "\n";
    return 0;
}