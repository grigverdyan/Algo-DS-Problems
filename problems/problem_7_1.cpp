#include <iostream>

void    rotate_mx_inplace(size_t size, int matrix[][30]);
void    input_mx(size_t size, int matrix[][30]);
void    print_mx(size_t size, int matrix[][30]);

int main() {
    constexpr int n = 30;
    int matrix[n][n];
    size_t size;
    
    std::cout << "Input size of n*n matrix: ";
    do {
        std::cin >> size;
    } while (n < 2 || n > 30);
    std::cout << "Input matrix: \n";
    input_mx(size, matrix);
    std::cout << "Your inputed matrix: \n";
    print_mx(size, matrix);
    std::cout << "Your inputed matrix - rotated in 90 degress with in-place method: \n";
    rotate_mx_inplace(size, matrix);
    print_mx(size, matrix);

    return 0;
}

void    input_mx(size_t size, int matrix[][30]) {
    for(size_t i = 0; i < size; i++) {
        for(size_t j = 0; j < size; j++) {
            std::cin >> matrix[i][j];
        }
    }
}

void print_mx(size_t size, int matrix[][30]) {
     for(size_t i = 0; i < size; i++) {
        for(size_t j = 0; j < size; j++) {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}



void    rotate_mx_inplace(size_t size, int matrix[][30]) { 
    size_t idx_1;
    size_t idx_2;
    for(size_t i = 0 ; i < size / 2 ; ++i){
        for(size_t j = i ; j < size - i - 1 ; ++j){
            int tempValue = matrix[i][j];
            idx_1 = size - 1 - i;
            idx_2 = size - 1 - j;
            matrix[i][j] = matrix[idx_2][i];
            matrix[idx_2][i] = matrix[idx_1][idx_2];
            matrix[idx_1][idx_2] = matrix[j][idx_1];
            matrix[j][idx_1] = tempValue;
        }
    }
}
