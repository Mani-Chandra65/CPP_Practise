#include <iostream>

int binary_search(int array[] , int size , int key){
    int low = 0;
    int high = size;
    while (low<=high){
        int mid = (low+high)/2;
        if(array[mid] == key)
            return mid;
        else if(array[mid] < key)
            low = mid+1;
        else if(array[mid] > key)
            high = mid-1;
    }
    return -1;

}

void result(int index){
    if(index != -1 )
        std::cout << "The key found at index #"<<index << '\n';
    else
        std::cout << "The key is not found. \n";
}

int main(){
    int list[] = {1,2,3,4,5,6,7,8,9,10};
    int index = binary_search(list,sizeof(list)/sizeof(list[0]),9);
    result(index);
    return 0;
}