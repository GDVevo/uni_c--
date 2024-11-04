#include <iostream>

void calculateSum(const int* arr, int size, int& sum) {
    sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
}

void findArrayWithMinSum(const int* arrA, const int* arrB, int size1, int size2) {
    int sumA = 0, sumB = 0;

    calculateSum(arrA, size1, sumA);
    calculateSum(arrB, size2, sumB);

    if (sumA > sumB) {
        std::wcout << L"Массив B имеет наименьшую сумму: " << sumB << std::endl;
        std::wcout << L"Элементы массива B: ";
        for (int i = 0; i < size2; i++) {
            std::cout << arrB[i] << " ";
        }
    }
    else {
        std::wcout << L"Массив A имеет наименьшую сумму: " << sumA << std::endl;
        std::wcout << L"Элементы массива A: ";
        for (int i = 0; i < size1; i++) {
            std::cout << arrA[i] << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int N_A, N_B;

    std::wcout << L"Введите размер массива A (N): ";
    std::cin >> N_A;
    int* A = new int[N_A];


    std::wcout << L"Введите " << N_A << L" элементов для массива A:" << std::endl;
    for (int i = 0; i < N_A; i++) {
        std::cin >> A[i];
    }
    
    std::wcout << L"Введите размер массива B (N): ";
    std::cin >> N_B;
    int* B = new int[N_B];

    std::wcout << L"Введите " << N_B << L" элементов для массива B:" << std::endl;
    for (int i = 0; i < N_B; i++) {
        std::cin >> B[i];
    }

    findArrayWithMinSum(A, B, N_A, N_B);

    delete[] A;
    delete[] B;

    std::wcout << L"Нажмите Enter для выхода...";
    std::cin.get();
    std::cin.get();

    return 0;
}