#include <iostream>

double square(double length);
double cube(double length);

int main(){

    // return: a return keyword will return the value back to the spot where you called the encompassing function

    double length = 6.0;
    double area = square(length);
    double volume = cube(length);

    std::cout << "Area: " << area << "cm square\n";
    std::cout << "Cube: " << volume << "cm cube\n";

    std::cout << "\n";
    return 0;
}

double square(double length){;
    return length * length;
}

double cube(double length){;
    return length * length * length;
}