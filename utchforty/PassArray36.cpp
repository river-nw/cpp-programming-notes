#include <iostream>

double getTotal(double prices[], int size);

int main(){

    double prices[] = {
        49.99, 15.05, 75, 9.99
    };
    // int names[0];
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size);

    std::cout << "$" << total;

    std::cout << "\n";
    return 0;
}

double getTotal(double prices[], int size){
    double total = 0;
    // you can't directly apply the size of the passed array because when a function receives an array, it decays it into a pointer and the function no longer knows what the size of array is anymore so we could pass it as an additional array (here as size) to let the function know what the size of the array is.
    for(int i = 0; i < size; i++){
        total += prices[i];
    }
    return total;
}