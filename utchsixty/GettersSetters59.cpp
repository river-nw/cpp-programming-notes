#include <iostream>

class Stove{
    private:
        int temperature = 0;
    public:
        // this is a getter, thish makes the temperature readable
        int getTemperature(){
            return temperature;
        }
        // this is a setter, thish makes the temperature writeable by modifying it
        void setTemperature(int temperature){
            if(temperature < 0){
                this -> temperature = 0;
            } else if(temperature >= 10) {
                this -> temperature = 10;
            } else {
                this -> temperature = temperature;
            }
        }
        Stove(int temperature){
            setTemperature(temperature);
        }
};

int main(){

    // abstraction: hidding unnecessary data from outside a class
    // getter: function that makes a private attribute readable
    // setter: function that makes a private attribute writeable

    Stove stove(0);
    stove.setTemperature(1000000);
    std::cout << "The temperature setting is: " << stove.getTemperature();

    std::cout << "\n";
    return 0;
}