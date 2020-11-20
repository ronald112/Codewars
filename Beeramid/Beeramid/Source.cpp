#include <iostream>
// Returns number of complete beeramid levels
int beeramid(int bonus, double price)
{
	double cans_num = bonus == 0 ? 0 : bonus / price;
	int layers = 0;

	for (double i = 1; i * i <= cans_num; i++) {
		cans_num -= i * i;
		layers++;
	}

	return layers;
}

int main() {
	std::cout << beeramid(2500, 2) << std::endl;
	return 0;
}