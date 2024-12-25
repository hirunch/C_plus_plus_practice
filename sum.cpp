#include <iostream>

int main(){

    int userNum;
    int sum = 0;

    std::cout << "Enter Number: ";
    std::cin >> userNum;

    for(int i = 1; i < userNum ; i++){
        std::cout << i << " ";
        sum += i;
    }
    std::cout << " sum = " << sum;

}