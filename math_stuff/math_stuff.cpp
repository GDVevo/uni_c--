#include <iostream>
#include <cmath>

int main() {
	float x, y, S, R, C;
	std::cout << "Enter X : ";
	std::cin >> x;
	std::cout << "Enter Y: ";
	std::cin >> y;
	std::cin.get();
	S = tan(x / y);
	R = (pow(x, 1 / 3) * sin(x) / exp(3 * x) + exp(3 * y));
	std::cout << "R = " << R << "; S = " << S << std::endl;
	C = std::max(R, S);
	std::cout << C << std::endl;
	std::cout << "Press Enter to leave...";
	std::cin.get();
	return 0;
}