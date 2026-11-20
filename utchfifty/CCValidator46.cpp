#include <iostream>

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);


int main(){

    // Luhn Algorithm
    // 1. Double every second digit from right to left. If doubled number is 2 digits, split them.
    // 2. Add all single digits from step 1.
    // 3. Add all odd numbered digits from right to left from the original series.
    // 4. Sum results from steps 2 & 3.
    // 5. If step 4 is divisible by 10, # is valid.

    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card number: ";
    std::cin >> cardNumber; // 6011000990139424

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);
    
    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);
    if(result % 10 == 0){
        std::cout << cardNumber << " is valid.";
    } else{
        std::cout << cardNumber << " is not valid.";
    } 

    std::cout << "\n";
    return 0;
}

int getDigit(const int number){
    // suppose integer passed is 18
    // (18 % 10 = 8) + ((18/10=1) % 10 = 1)
    return number % 10 + (number/10%10);
}

int sumOddDigits(const std::string cardNumber){
    int sum = 0;
    for(int i = cardNumber.size() - 1; i >= 0; i-=2){
        sum += cardNumber[i] - '0';
    }
    return 0;
}

int sumEvenDigits(const std::string cardNumber){
    int sum = 0;
    for(int i = cardNumber.size() - 2; i >= 0; i-=2){
        sum += getDigit((cardNumber[i] - '0') * 2);
    }
    return 0;
}