#include <iostream>

int main(){
    std::string name;
    std::cout << "ENter your Name";
    std::getline(std::cin, name);
    int len = name.length();                              //string length
    std::cout << "Length = " << len <<'\n';
    std::string name1;
    if(name1.empty()){                                    //checks if the string is empty or not
        std::cout << "You didn't enter your name";         
    }

    name.clear();                                        //Clears string

    name.append("@gmail.com");                           //Appends word to a string

    name.at(2);                                          /*in place of 2 use index.... 
                                                         gives the chat at the given index*/   

    name.insert(0,"@");                                  //(where to insert , what to insert)

    name.find(' ');                                      // gives the first index where this is there

    name.erase(2,5);                                     //erases the portion("start , end ")
}