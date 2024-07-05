#include <iostream>

class Parent{
    public:
    std::string name = "Hafiz";
    void eat(){
        std::cout << "Eating\n";
    }
};
class Child : public Parent {

};
int main(){
    Child ch1;
    ch1.eat();              //You can see the inheritance
}
