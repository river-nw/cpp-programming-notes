#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

namespace third{
    int y = 3;
}

int main(){
    // Namespaces: provides a solution for preventing name conflicts
    //             in large projects. Each entity needs a unique name.
    //             A namespace allows for identically named entities
    //             as long as the namespaces are different.
    using namespace third;
    
    int x = 0;
    std::cout << x << "\n"; // 0
    std::cout << first::x << "\n"; // 1
    std::cout << second::x << "\n"; // 2

    std::cout << y << "\n";

    return 0;
}