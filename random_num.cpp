#include <iostream>
#include <random>

int main(){

    int randomNumber = rand() % 10;
    int userNum;
    int i = 3;

    std::cout << "\t Number Guess (0 -10) \n \n";

    std::cout << "Enter Number you have (" << i << ") time: ";
    std::cin >> userNum;
    i -= 1;

        if(randomNumber == userNum){
            std::cout << "You are Win!";

        }
        else{
            while (i > 0){
                std::cout << "Enter Number you have (" << i << ") time: ";
                std::cin >> userNum;
                if(randomNumber == userNum){
                    std::cout << "You are Win!";
                    break;

                }else if(randomNumber != userNum){
                    i--;
                    if( i == 0){
                        std::cout << "You are lose!";
                    }
                }

            }

    }



}