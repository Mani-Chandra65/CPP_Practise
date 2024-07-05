#include <iostream>

class human {
    public:
    std::string name;
    std::string occupation;
    int age;
    std::string status;
    int action;

    void eat(){
        std::cout << "This person is eating.\n";
    }
    void sleep(){
        std::cout << "This person is sleeping.\n";
    }
    void drink(){
        std::cout << "This person is drinking.\n";
    }
};

int main(){
    std::cout << "HELLO!\n";
    human per1;
    std::cout << "Enter the person's name: ";
    std::cin >> per1.name;
    std::cout << "Enter the person's age: ";
    std::cin >> per1.age;
    std::cout << "Enter the person's occupation: ";
    std::cin >> per1.occupation;
    std::cout << "Enter the person's status: ";
    std::cin >> per1.status;
    std::cout << "Enter the person's action{1.Eating 2.Drinking 3.sleeping}: ";
    std::cin >> per1.action;

    if(per1.action == 1)
        per1.eat();
    else if(per1.action == 2)
        per1.drink();
    else if(per1.action == 3)
        per1.sleep();
    else
        std::cout << "Not a valid number!\n";
}