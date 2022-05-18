#include <iostream>

void swap(char& a, char& b){
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}

void str_rev(char* str, int size) {
	for(int i = 0; i < size / 2; ++i) {
		swap(str[i], str[size - i - 1]);
	}
}

int main() {
	int size;
	std::cout << "Enter your string size!\n ";
	std::cin >> size;
	char* str = new char[size + 1];

	std::cin.ignore();
    std::cout << "Input your string!\n ";
    std::cin.getline(str, size);

	str_rev(str, size);
    std::cout << "Reversed string: ";
    std::cout << str;
    
    delete[] str;
    str = 0;
	
	return 0;
}

