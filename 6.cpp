#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>    
using namespace std;

int main() {
    double r, h;
    cout << "������� ������ r � ������ h: ";
    cin >> r >> h;
    double V = M_PI * r * r * h;
    double S = 2.0 * M_PI * r * (r + h);

    cout << "����� V = " << V << "\n";
    cout << "������� ����������� S = " << S << "\n";
    return 0;
}