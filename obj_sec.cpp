#include <iostream>

class Student {
    public:
        std::string name;
        int age;

    Student(std::string name,int y){      //constructor
        this->name = name;
        age = y;
    }
    private:
        int balance = 4000;
    public:
    int getBalance(){
        return balance;                  //getter
    }

    void setBalance(int balance){
        this ->balance = balance;        //setter
    }
};

int main(){
    int newBal;
    Student st1("Riya", 26);
    std::cout << st1.name << '\n';
    std::cout << st1.age << '\n';
    std::cout << "Balance: " << st1.getBalance() << '\n';
    std::cout << "Update Balance: ";
    std::cin >> newBal;
    st1.setBalance(newBal);
    std::cout << "Balance: " << st1.getBalance() << '\n';

}