#include <iostream>

using text_t = std::string;
using number_t = int;

int main(){
    // typedef: is a reserved keyword used to create an additional name
    //          (alias) for another data type.
    //          It's a new identifier for an existing type.
    //          Helps with readability and reduces typos.
    //          Use it when there's a clear benefit.
    //          Replaced with 'using' (works better w/ templates)

    text_t firstName = "Bro";
    number_t age = 21;
    std::cout << firstName << "\n";
    std::cout << age << "\n";

    return 0;
}