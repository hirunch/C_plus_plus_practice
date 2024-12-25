#include <iostream>
#include <vector>

int main(){

    std::vector<double> itemPrice;
    int itemsTotal;
    double oneItemPrice;
    double totalPrice;

    std::cout << "How many items buy: ";
    std::cin >> itemsTotal;

    for(int i = 0; i < itemsTotal; i++){
        std::cout << "Enter One Items prices: ";
        std::cin >> oneItemPrice;
        itemPrice.push_back(oneItemPrice);
    }



    for(int i = 0; i < itemPrice.size(); i++){
        totalPrice += itemPrice[i];
    }

    std::cout << "Total Price: " << totalPrice;
}