#include <iostream>
#include <random>

int main(){

    int randomNumber = rand() % 100;
    int userNum;
    int i = 3;

    std::cout << "\t Number Guess \n \n";
    std::cout << randomNumber <<"\n";

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
                }else{
                    std::cout << "you are losses!";
                }

            }

    }



}