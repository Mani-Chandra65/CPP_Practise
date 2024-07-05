#include <iostream>
#include <ctime>

int main(){

  //  srand(time(NULL));
    //int num = rand();  // This gives pseudo random number


    srand(time(0));     //Takes current time as reference
    int randNum = rand() % 5 + 1 ;
    switch(randNum){
        case 1: std::cout << "You win 100$\n";break;
        case 2: std::cout << "You win 200$\n";break;
        case 3: std::cout << "You win 300$\n";break;
        case 4: std::cout << "You win 400$\n";break;
        case 5: std::cout << "You win 500$\n";break;
    }
}