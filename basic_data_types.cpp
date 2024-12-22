#include <iostream>
#include <string>


int main()
    {
        //basic data types in  C++
        //int integer
        //double floating numbers
        //char characters
        //string strings values
        //bool boolean values (truth or false)

        int age = 20;
        double price = 20.33;
        char character = 'A';
        std::string message = "Hello C++";
        bool answer = true;

        //data types modifiers
        //signed
        //unsigned
        //short
        //long

        //const = value cannot be change
        const int one = 1;

        //type conversion
        double weight1;
        int weight2;

        weight1 = 150.99;
        weight2 = (int)weight1;

        std::cout << weight2;

        return 0;

    }



