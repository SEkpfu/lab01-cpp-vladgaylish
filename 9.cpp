#include <iostream>
using namespace std;

int main() {
    long N;
    cin >> N;
    long  hours = N / 3600;
    long  minutes = (N % 3600) / 60;
    long  seconds = N % 60;

    cout << "������ ����: " << hours << "\n";
    cout << "������ ������: " << minutes << "\n";
    cout << "������� ������: " << seconds << "\n";
    return 0;
}