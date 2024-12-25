#include <iostream>
#include <vector>

int main(){
    std::vector<std::string> listOne = {"Apple", "Orange", "Mango"};

    std::cout << listOne[1] << "\n";

    listOne.push_back("Lemon");


    for(int i = 0; i < listOne.size(); i++){
        std::cout << listOne[i] << "\n";

    }

    int i = 0;
    while (i < listOne.size()){

        std::cout << listOne[i] << "\n";

       i++;
    }
}