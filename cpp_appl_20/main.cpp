#include <iostream>
#include<Windows.h>



void sumArrays(int* A, int* B, int* C, int size) {
    for (int i = 0; i < size; i++) {
        C[i] = A[i] + B[i];
    }
}

int main() {
    system("chcp 1251");
    system("cls");
    int size;
    std::cout << "������ ����� ������: ";
    std::cin >> size;

    int A[100], B[100], C[100]; 

    std::cout << "������ �������� ������ A:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << "A[" << i << "]: ";
        std::cin >> A[i];
    }

    std::cout << "������ �������� ������ B:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << "B[" << i << "]: ";
        std::cin >> B[i];
    }

    
    sumArrays(A, B, C, size);

    std::cout << "���� ������ A �� B (����� C):" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << "C[" << i << "]: " << C[i] << std::endl;
    }

    return 0;
}
