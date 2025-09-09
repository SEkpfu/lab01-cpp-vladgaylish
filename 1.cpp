#include <iostream>

using namespace std;

int main() {
    double cv;
    double sv;
    double cp;
    double sp;
    cin >> cv;
    cin >> sv;
    cin >> cp;
    cin >> sp;
    cv = cv * 0.123;
    cp = cp * 0.123;
    sv = sv * 0.06;
    sp = sp * 0.06;
    cout << "Vasya = " << cv + sv << "\n" << "Petya = " << cp + sp << "\n" << "Obsee = " << cv + sv + cp + sp;
    return 0;
}