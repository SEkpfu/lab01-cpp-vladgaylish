#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "������� ��� ����� �����: ";
    cin >> a >> b;
    int lastA = a % 10;
    int lastB = b % 10;
    cout << "����� ��������� ���� = " << (lastA + lastB) << "\n";
    return 0;
}