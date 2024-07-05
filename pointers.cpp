#include <iostream>

int main(){

    std::string name = "Mani";
    int age = 17;
    std::string sub[6] = {"P&S","Python","Java","DataStructures","FSE","CS-I"};
    int num1 = 65;

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pSub = sub;
    int *pnum1 = nullptr;

    if(pnum1 == nullptr)
      std::cout << "Not assigned \n";
    pnum1 = &num1;
    if(pnum1 == nullptr)
      std::cout << "Not assigned \n";
    else
      std::cout << "Assigned \n";
    std::cout << *pName << ',' << *pAge << '\n';
    std::cout << *pSub << '\n' << *(pSub+1) << '\n';
    return 0;
}