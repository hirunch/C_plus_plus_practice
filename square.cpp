#include <iostream>

int main(){

    int userNumber;
    int square = 0;
    int i = 0;
      std::string value= "*";

    std::cout << "Enter Number: ";
    std::cin >> userNumber;

    while(i <= userNumber){
        std::cout << i << "\t" << square*square << "\n";
        i++;
        square += userNumber;
    }

}