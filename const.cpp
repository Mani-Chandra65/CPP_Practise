#include <iostream>
int main(){
    //Using constant doesn't change the values
    const double PI = 3.14;
    std:: cout << PI + '\n';
    /*PI+=1;  // IT GIVES ERROR!!
    const.cpp:6:7: error: assignment of read-only variable ‘PI’
    6 |     PI+=1;*/
    std:: cout << PI;
}