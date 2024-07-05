#include <iostream>

void sort(int array[], int size);

int main(){
    int array[] = {1,5,7,8,3,2,4,9,10,6};
    int size = sizeof(array)/sizeof(array[0]);
    std::cout << "Entered elements are: \n";
    for(int i = 0;i < size;i++){
        std::cout << array[i] <<" ";
    }
    std::cout << std::endl;
    sort(array,size);
    std::cout << "Sorted array:\n";
    for(int i = 0;i < size;i++){
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

void sort(int array[],int size){
    int temp;
    for(int i =0;i<size-1;i++){
        for(int j = 0;j < size-i-1; j++){
            if(array[j]>array[j+1]){
                temp = array[j];
                array[j] = array [j+1];
                array [j +1] = temp;
            }
        }
    }
}