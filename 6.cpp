#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>    
using namespace std;

int main() {
    double r, h;
    cout << "Введите радиус r и высоту h: ";
    cin >> r >> h;
    double V = M_PI * r * r * h;
    double S = 2.0 * M_PI * r * (r + h);

    cout << "Объем V = " << V << "\n";
    cout << "Площадь поверхности S = " << S << "\n";
    return 0;
}