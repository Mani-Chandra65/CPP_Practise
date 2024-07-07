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
    int list[] = {45,65,8,7,54,78,96,35,55,44};
    int size = sizeof(list)/sizeof(list[0]);
    bubble_sort(list,size);
    for (int val:list){
        std::cout << val << ' ';
    }
    std::cout <<std::endl;
    return 0;
}