#include <iostream>

int main(){
    // arithmetic operation order in c++

    // in c++, we follow an order similar to pemdas, which is:
    // parenthesis
    // multiplication and division
    // addition and subtraction

    // when operations share the same precedence level,
    // c++ resolves them using left-to-right associativity

    int students = 6 - 5 + 4 * 3 / 2;
    // 6 - 5 + 12 / 2
    // 6 - 5 + 6
    // 1 + 6
    // 7
    std::cout << students;

    return 0;
}