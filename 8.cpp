#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "������� �������������� ����� �����: ";
    cin >> n;
    int first = n / 1000;
    int last = n % 10;

    cout << "������ ����� = " << first << "\n";
    cout << "��������� ����� = " << last << "\n";
    return 0;
}