#include <iostream>

int main(){

    int pin;
    int tries = 3;

    std::cout << "Enter PIN: ";
    std::cin >> pin;

    while (pin != 1234 &&  tries > 0){
        std::cout << "Enter pin (" << tries << " tries left) : ";
        std::cin >> pin;
        tries--;


    }
    if(pin == 1234){
        std::cout << "Now you can access";
    }else{
        std::cout << "Locked";
    }


}