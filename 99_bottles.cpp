#include <iostream>

int main(){

    std::cout << "99 Bottle of beer Song\n";

    for(int i = 99; i > 0; i--){
        std::cout << i << " bottles of beer on the wall, " << i << " bottles of beer.\n"
        << "Take one down and pass it around, " << i - 1 << " bottles of beer on the wall.\n";
    }
}
