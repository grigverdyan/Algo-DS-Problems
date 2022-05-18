#include <iostream>
using namespace std;
 
void insertionSort(int *arr, int n);
void displayArray(int *arr, int n);

int main()
{
    int arr[50];
    unsigned int n;
    std::cout << "\nInput size of array: ";
    std::cin >> n;
    std::cout << "\nInput array of integers: ";
    for(int i = 0; i < n; i++)
	    std:: cin >> arr[i];
 
    insertionSort(arr, n);
    displayArray(arr, n);
 
    return 0;
}

void insertionSort(int *arr, int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
 
void displayArray(int *arr, int n)
{
	if (n > 0)
	{
		std::cout << "\nSorted array: ";
    		for (int i = 0; i < n; i++)
        		std::cout << arr[i] << " ";
    		std::cout << endl;
	}
	else
		std::cout << "\nThere is no array to sort!!";
}
