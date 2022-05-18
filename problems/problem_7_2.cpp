#include <iostream>

void    rotate_mx(int size, int matrix[][30], int rotated_90_mx[][30]);
void    input_mx(int size, int matrix[][30]);
void    print_mx(int size, int matrix[][30]);

int main() {
    constexpr int n = 30;
    int matrix[n][n];
    int size;
    
    std::cout << "Input size of n*n matrix: ";
    do {
        std::cin >> size;
    } while (n < 2 || n > 30);
    std::cout << "Input matrix: \n";
    input_mx(size, matrix);
    std::cout << "Your inputed matrix: \n";
    print_mx(size, matrix);
    std::cout << "Your inputed matrix - rotated in 90 degrees \n";
    int rotated_90_mx[n][n];
    rotate_mx(size, matrix, rotated_90_mx);
    print_mx(size, rotated_90_mx);
    
    return 0;   
}

void    input_mx(int size, int matrix[][30]) {
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            std::cin >> matrix[i][j];
        }
    }
}

void print_mx(int size, int matrix[][30]) {
     for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}



void    rotate_mx(int size, int matrix[][30], int rotated_90_mx[][30]) {
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            rotated_90_mx[j][size - 1 - i] = matrix[i][j];
        }
    }
}
