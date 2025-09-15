#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите четырехзначное целое число: ";
    cin >> n;
    int first = n / 1000;
    int last = n % 10;

    cout << "Первая цифра = " << first << "\n";
    cout << "Последняя цифра = " << last << "\n";
    return 0;
}