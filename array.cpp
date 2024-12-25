#include <iostream>
#include <array>

int main(){


    int myArray[] = {4,3,5,6,};

    std::cout << myArray[1] << "\n";
    myArray[2] = 5;
    myArray[5] = 88;
    std::cout << myArray[2] << "\n";
    std::cout << myArray[4] << "\n";
    std::cout << myArray[5] << "\n";

}