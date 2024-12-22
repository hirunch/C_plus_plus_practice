#include <iostream>

int main(){

    int marks = 90;

    if(marks >= 90 and marks < 100){
        std::cout << "A+";
    }
    else if (marks >= 75 and marks < 90){
        std::cout << "A";
    }
    else if (marks >= 65 and marks < 75){
        std::cout << "B";
    }
    else if (marks >= 45 and marks < 55){
        std::cout << "C";
    }
    else if(marks >= 35 and marks < 45){
        std::cout << "S";
    }
    else if (marks >= 0 and marks < 35){
        std::cout << "F";
    }
    else{
        std::cout << "incorrect input";
    }

    return 0;
}