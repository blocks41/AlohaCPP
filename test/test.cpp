#include <iostream>
#include <array>
#include <vector>

int main() {

	int a[10];
	std::vector<int> b;
	std::array<int, 10> c;

	b = static_cast<std::vector*> a;
	c = b;
}