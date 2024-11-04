#include <iostream>
#include <set>

void get_minimum(std::set<int> setA, std::set<int> setB) {
    int minA = *setA.begin();
    int minB = *setB.begin();

    if (minA <= minB) {
        std::wcout << L"���������� ������� �� ����������� �������� A � B: " << minA << std::endl;
    }
    else {
        std::wcout << L"���������� ������� �� ����������� �������� A � B: " << minB << std::endl;
    }
}


int main() {
    setlocale(LC_ALL, "Russian");
    int N_A, N_B, insertnum;
    std::set<int> A, B;

    std::wcout << L"������� ������ ��������� A: ";
    std::cin >> N_A;

    std::wcout << L"������� " << N_A << L" ��������� ��� ��������� A:" << std::endl;
    for (int i = 0; i < N_A; i++) {
        std::cin >> insertnum;
        A.insert(insertnum);
    }

    std::wcout << L"������� ������ ��������� B: ";
    std::cin >> N_B;

    std::wcout << L"������� " << N_B << L" ��������� ��� ��������� B:" << std::endl;
    for (int i = 0; i < N_B; i++) {
        std::cin >> insertnum;
        B.insert(insertnum);
    }

    get_minimum(A, B);

    std::wcout << L"������� Enter ��� ������...";
    std::cin.get();
    std::cin.get();

    return 0;
}