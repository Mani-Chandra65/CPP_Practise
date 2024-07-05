#include <iostream>

int main(){
    //fill function is used to fill some kind of elements n number of times
    //fill(beginning address, ending adress, value)

    std::string food[10],food1[10];
    fill(food1,food1+10,"Pizza");
    for(std::string n : food1){
        std::cout << n <<'\n';
    }
    std::string temp;
    for(int i = 0;i<10;i++){
        std::cout << "Enter your favourite game or 'q' to quit #" << i+1;
        std::cin >> temp;
        if(temp == "q"){
            break;
        }
        else {
            food[i] = temp;
        }
    }
    std::cout << "You entered... \n";
    for(int i = 0;!food[i].empty();i++){
        std::cout << food[i] << '\n';
    }
    return 0;
}