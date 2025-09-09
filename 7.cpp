#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "¬ведите два целых числа: ";
    cin >> a >> b;
    int lastA = a % 10;
    int lastB = b % 10;
    cout << "—умма последних цифр = " << (lastA + lastB) << "\n";
    return 0;
}