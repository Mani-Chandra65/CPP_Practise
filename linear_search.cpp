#include <iostream>

int search(int array[] ,int size, int key){
    
    for (int i = 0; i < size; i++){
        if(array[i] == key)
            return i;
    }
    return 0;
}

int main(){

    int n , found = false,key;
    std::cout << "Enter nummber of elements in the list: \n";
    std::cin >> n;
    int arr[n];
    std::cout << "Enter the elements of array:\n";
    for(int i=0;i<n;i++){
        std::cin >> arr[i];
    }
    std::cout << "Enter the key value:\n";
    std::cin >> key;
    found = search(arr,n,key);
    if(found == 0)
      std::cout << "The key isn't present.\n";
    else
      std::cout << "The key is found at index #" << found << '\n';

    return 0;
}
