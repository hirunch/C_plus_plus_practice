#include <iostream>

int main(){

    //switch
    int grade;
    std::cout << "Enter your Grade Number: ";
    std::cin >> grade;

    switch(grade) {

        case 1:
            std::cout << "Grade 1";
            break;
        case 2:
            std::cout << "Grade 2";
            break;
        case 3:
            std::cout << "Grade 3";
            break;
        case 4:
            std::cout << "Grade 4";
            break;
        case 5:
            std::cout << "Grade 5";
            break;
        default:
            std::cout << "Incorrect Input";
            break;
    }
}
