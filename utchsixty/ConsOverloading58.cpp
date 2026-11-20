#include <iostream>

class Pizza{
    public:
        std::string topping1;
        std::string topping2;

    Pizza(){

    }
    Pizza(std::string topping1){
        this -> topping1 = topping1;
    }
    Pizza(std::string topping1, std::string topping2){
        this -> topping1 = topping1;
        this -> topping2 = topping2;
    }
};

int main(){

    // overloaded constructors: they are multiple constructors with the same name but different parameters.
    // it allows for varying arguments when instantiating an object.

    Pizza pizza1("pepporoni");
    Pizza pizza2("mushrooms", "peeppers");
    Pizza pizza3;

    std::cout << pizza1.topping1 << "\n";

    std::cout << pizza2.topping1 << "\n";
    std::cout << pizza2.topping2 << "\n";

    std::cout << "\n";
    return 0;
}