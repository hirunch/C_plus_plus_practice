#include <iostream>

int main(){

    for(int i = 100; i > 0; i--){
        if(i % 2 == 0){
            std::cout << i << "\t" << "Even Number\n";
        }
        else{
            std::cout << i << "\t" << "ODD Number\n";
        }
    }
}



