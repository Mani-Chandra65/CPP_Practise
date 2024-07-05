#include <iostream>
#include <string> // Include <string> for std::string

struct stud {
    std::string name;
    int rNum;
    float GPA;
    bool elig = false;
};

void callfun(stud stud);
void callfun2(stud &stud);

int main() {
    std::cout << "Hello there...\nEnter number of students:\n";
    int num;
    std::cin >> num;

    stud students[num]; 

    for (int i = 0; i < num; i++) {
        std::cout << "Enter name of student #" << i + 1 << ": ";
        std::cin >> students[i].name;
        
        std::cout << "Enter roll number of student #" << i + 1 << ": ";
        std::cin >> students[i].rNum;
        
        std::cout << "Enter GPA of student #" << i + 1 << ": ";
        std::cin >> students[i].GPA;

        if (students[i].GPA > 7.5) {
            students[i].elig = true;
            std::cout << "You are eligible!\n";
        }
    }
    std::cout << "Address accessed directly: " << &students[0]<<std::endl;
    callfun(students[0]);     //Pass by value
    callfun2(students[0]);     //Pass by reference

    return 0;
}

void callfun(stud stud){
    std::cout << "Address in pass by value: "<< &stud<<std::endl;
}
void callfun2(stud &stud){
    std::cout << "Address in pass by reference: "<< &stud <<std::endl;
}