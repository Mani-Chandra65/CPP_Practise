#include <iostream>
#include <string> // Include <string> for std::string

struct stud {
    std::string name;
    int rNum;
    float GPA;
    bool elig = false;
};

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

    return 0;
}
