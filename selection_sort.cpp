 #include <iostream>

 void swap(int &num1 , int &num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
 }
 void selection_sort(int list[],int size){
    for(int i = 0;i<size-1;i++){
    int min = i;
        for(int j = i+1;j<size;j++){
            if(list[j] < list[min]){
            min = j;
            }
        }
        swap(list[min],list[i]);
    }
 }

 int main(){
    int n;
    std::cout << "Enter the number of elements of list:\n";
    std::cin >> n;
    int list[n];
    std::cout << "Enter the elements of the list:\n";
    for(int i=0;i<n;i++){
        std::cin >> list[i];
    }
    selection_sort(list,n);
    std::cout << "The sorted list is:\n";
    for (int val : list){
        std::cout <<val<<' ';
    }
    std::cout << '\n';
    return 0;
 }
