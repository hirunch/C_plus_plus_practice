#include <iostream>

int main() {

    int year;

    std::cout << "Enter Year: ";
    std::cin >> year;

    std::string strYear = std::to_string(year);
    int yearLength = strYear.length();

    if(yearLength == 4){

        year *= 100;

        if(year % 4 == 0 && (year %100 == 0 && year % 400 == 0) && year  %400 == 0 ){
            year /= 100;
            std::cout << year << " Leap Year";
        }else{
            std::cout << "Not Leap Year";
        }


    }else{
        std::cout << "not year";
    }

}