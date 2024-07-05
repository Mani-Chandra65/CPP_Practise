#include <iostream>

int main (){
std::string name,fullName;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Enter your full name";
    std::getline(std::cin >> std::ws, fullName);
    std::cout << "Hello " << name << "!\n";
}