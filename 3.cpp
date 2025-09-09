#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int sum = a + b + c;
	(sum % 2 == 0)
		? cout << "naim = " << min(b, c) << endl
		: cout << "sum 1 and 2 = " << a + b << "\n" << "proizv = " << a * b * c << endl;
	return 0;
}