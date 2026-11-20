#include <iostream>

int main(){
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // #1
    // #2

    if(name.length() > 12){
        std::cout << "Your name can't be over 12 characters.";
    } else if (name.empty()) {
        std::cout << "You didn't enter your name.";
    } else {
        std::cout << "Welcome " << name << "!";
    }
    std::cout << "\n";

    // #3

    std::string name2 = name;
    name2.clear(); // clears the string
    // std::cout << "Hello " << name2 << "!";
    // std::cout << "\n";

    // #4

    std::string name3 = name;

    // modification not in the source material
    name3.erase(remove(name3.begin(), name3.end(), ' '), name3.end());
    std::transform(name3.begin(), name3.end(), name3.begin(),
        [](unsigned char c) {
            return std::tolower(c);
        }
    );

    name3.append("@gmail.com");
    std::cout << "Your email is now " << name3;
    std::cout << "\n";

    // #5

    std::string name4 = name;
    std::cout << "First character: " << name4.at(0);
    std::cout << "\n";

    // #6

    std::string name5 = name;
    name5.insert(0, "@");
    std::cout << "After inserting '@': " << name5;
    std::cout << "\n";

    // #7

    std::string name6 = name;
    std::cout << "Position of the first character in find: " << name6.find(' ');
    std::cout << "\n";

    // #8

    std::string name7 = name;
    name7.erase(0, 6); // inputs: inclusive, exclusive
    std::cout << "Name after erasing: " << name7;


    std::cout << "\n";
    return 0;
}