 #include <iostream>

 void swap(int &num1 , int &num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
 }
 void selection_sort(int list[],int size){
    for(int i = 0;i<size-1;i++){

    int min = list[0];
    int k = i;
        for(int j = i;j<size-1;j++){
            if(list[j] < min){
            min = list[j+1];
            k = j+1;
            }
        }
        swap(list[k],list[i]);
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
