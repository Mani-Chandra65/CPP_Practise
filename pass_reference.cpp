#include <iostream>

void swap(int &num1,int &num2);
void swap2(int &num1,int &num2);
void swap1(std::string &str1,std::string &str2);
int main(){

    //This program shows pass by reference 
    // use & operator for address

    int num1 = 20,num2 = 55;
    std::string str1 = "Hello!" , str2 = "Mani!!";

    std::cout << "Before Swapping: \n";
    std::cout << "str1 = " << str1 << "...str2 = " << str2 << '\n';
    std::cout << "num1 = " << num1 << "...num2 = " << num2 << '\n';
    swap(num1,num2);
    swap1(str1,str2);
    std::cout << std::endl;
    std::cout << "After Swapping: \n";
    std::cout << "str1 = " << str1 << "...str2 = " << str2 << '\n';
    std::cout << "num1 = " << num1 << "...num2 = " << num2 << '\n';
    swap2(num1,num2);
    std::cout << "After Swapping 2: \n";
    std::cout << "num1 = " << num1 << "...num2 = " << num2 << '\n';
    return 0;
}

void swap(int &num1,int &num2){
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}
void swap1(std::string &str1,std::string &str2){
    std::string temp;
    temp = str1;
    str1 = str2;
    str2 = temp;
}
void swap2(const int &num1,const int &num2){   //using const lets you not to change values
    int temp;
    temp = num1;            //These lines gives an error as num is const
    num1 = num2;
    num2 = temp;
}