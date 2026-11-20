#include <iostream>

int main(){

    // by self
    int arr[] = {
        10,1,9,2,8,3,7,4,6,5
    };
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i <= size-2; i++){
        for(int j = 0; j <= size-(i+2); j++){
            int temp = arr[j];
            if(temp > arr[j+1]){
                arr[j] = arr[j+1];
                arr[j+1] = temp; 
            }
        }
    }
    for(int i = 0; i <= size-1; i++){
        std::cout << "iteration " << i << ": " << arr[i] << "\n";
    }

    std::cout << "\n";
    return 0;
}