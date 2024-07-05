#include <iostream>

int main() {
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;


    // if else statements
    if(age >= 18) {
        std::cout << "You are a major.\n";
    }
    else if(age >= 12 ) {
        std::cout << "You are a teenager.\n";
    }
    else {
        std::cout << "You are a minor.\n";
    }


    //Switch cases
    int ch;
    std::cout << "Enter a number between 1 to 4";
    std::cin >> ch;
    switch (ch)
    {
    case 1:
        std::cout << "You entered 1!\n";
        break;
    case 2:
        std::cout << "You entered 2!\n";
        break;
    case 3:
        std::cout << "You entered 3!\n";
        break;
    case 4:
        std::cout << "You entered 4!\n";
        break;
    default:
        std::cout << "You entered wrong number.\n";
        break;
    }

    //ternary operators
    //condition?if true:if false;

    (age >= 18)?(std::cout << "Major"):(std::cout << "Minor");
}