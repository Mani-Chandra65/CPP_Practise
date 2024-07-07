#include <iostream>

void swap(int &num1,int &num2){
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

void bubble_sort(int list[],int size){
    for(int i = 0; i < size-1; i++){
        for(int j = 0; j < size-i-1;j++){
            if(list[j] > list[j+1]){
                swap(list[j],list[j+1]);
            }
        }
    }
}

int main(){
    int n;
    std::cout << "Enter number of elements less than 10:\n";
    std::cin >> n;
    int list[n];
    std::cout << "Enter the elements of the list:";
    for(int i = 0; i < n ; i++){
        std::cin >> list[i];
    }
    bubble_sort(list,n);
    for (int val:list){
        std::cout << val << ' ';
    }
    std::cout <<std::endl;
    return 0;
}