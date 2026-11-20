#include <iostream>

int main(){

    std::string questions[] = {
        "1. What year was C++ created?: ",
        "2. Who invented C++?: ",
        "3. What is the predecessor of C++?: ",
        "4. Is the Earth flat?: "
    };
    std::string options[][4] = {
        {"A. 1960", "B. 1975", "C. 1985", "D. 1989"},
        {"A. Guido van Rossum", "B. Bjarne Stroutsrup", "C. John Carmack", "D. Mark Zuckerburg"},
        {"A. C", "B. C++", "C. C--", "D. B++"},
        {"A. Yes", "B. No", "C. Sometimes", "D. What's Earth?"}
    };
    char answerKey[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0;

    for(int i = 0; i < size; i++){
        std::cout << questions[i] << "\n";
        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            std::cout << options[i][j] << "\n";
        }

        std::cout << "Enter answer: ";
        std::cin >> guess;
        guess = toupper(guess);

        if(guess == answerKey[i]){
            std::cout << "Correct!\n";
            std::cout << "\n";
            score++;
        } else {
            std::cout << "Incorrect!\n";
            std::cout << "Answer: " << answerKey[i] << "\n";
            std::cout << "\n";
        }
    }

    std::cout << "Results: \n";
    std::cout << "Correct guesses: " << score << "\n";
    std::cout << "Number of Questions: " << size << "\n";
    std::cout << "Score: " << (score/(double)size)*100 << "%";

    std::cout << "\n";
    return 0;
}