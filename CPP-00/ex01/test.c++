#include <iostream>

int main (){
    std::string input;

    std::cout << "Enter your first name: ";
    std::getline(std::cin, input);
    std::cout << input << std::endl;
}