#include <iostream>

int main(){
    int matrix[3][3];
    int rows = sizeof(matrix)/sizeof(matrix[0]);
    int columns = sizeof(matrix[0])/sizeof(matrix[0][0]);
    for (int i = 0;i <rows;i++){
        for( int j = 0;j < columns;j++){
            std::cout << "Enter the matrix number at index[" << i << "][" <<j << "] :";
            std::cin >> matrix[i][j];
        }
    }
    std::cout << "Entered matrix is: \n";
    for (int i = 0;i <rows;i++){
        for( int j = 0;j < columns;j++){
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << '\n';
    }
    return 0;
}