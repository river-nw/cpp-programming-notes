#include <iostream>
#include <cmath>

int main(){
    double x = 3.14;
    double y = 4;
    double z;

    // z = std::max(x, y); // 3.14
    // z = std::min(x, y); // 2
    // z = pow(2, 3); // 8
    // z = sqrt(9); // 3
    // z = abs(-3); // 3
    // z = round(x); // 3
    // z = ceil(x);
    z = floor(x);    

    std::cout << z;

    std::cout << "\n";
    return 0;
}