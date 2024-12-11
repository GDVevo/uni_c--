#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float x, y, S, R, C;
	cout << "Enter X : ";
	cin >> x;
	cout << "Enter Y: ";
	cin >> y;
	cin.get();
	S = tan(x / y);
	R = (pow(x, 1 / 3) * sin(x) / exp(3 * x) + exp(3 * y));
	if (y != 0) {
		cout << "R = " << R << "; S = " << S << endl;
	}
	else {
		cout << "R = " << R << "; S = undefined" << endl;
	}
	C = max(R, S);
	cout << C << endl << "Press Enter to leave...";
	cin.get();
	return 0;
}