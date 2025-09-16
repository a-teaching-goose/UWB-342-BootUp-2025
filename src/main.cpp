#include <iostream>

// Finds the element-wise maximum between two arrays of length n
void maxArrays( int* arr1,  int* arr2, int* result, int n) {
     int* p1 = arr1;
     int* p2 = arr2;
    int* pr = result;

    for (int i = 0; i < n; ++i) {
        *pr = (*p1 > *p2) ? *p1 : *p2;
        p1++;
        p2++;
        pr++;
    }
}

int main() {
    int array1[] = {1, 7, 3, 9, 5};
    int array2[] = {2, 6, 4, 8, 10};
    int *result = new int[5];

    maxArrays(array1, array2, result, 5);

    std::cout << "Element-wise max array: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << result[i] << " ";
    }
    std::cout << "\n";

    delete[]result;
}