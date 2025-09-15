#include <iostream>
#include <cmath>    
#include <iomanip>
using namespace std;

int main() {
    double x,y;
    cin >> x >> y;
    double z1 = pow((1-tan(x)),(1/tan(y))) + cos(x-y);
    double z2 = fabs(pow(x,2) - pow(x,3)) - (7 * x) / (3 * x - 15 * x);

    cout << showpos << fixed  << setprecision(5) << z1 << endl ;
    cout << scientific << z2 << endl;
    return 0;
}