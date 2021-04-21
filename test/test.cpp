#include <iostream>

#define Maxsize 1000

int main() {
	int n;
	int List[Maxsize]{-1};

	std::cin >> n;
	 
	for (int i = 1; i <= n; i++) {    //在数组中加序列
		List[i * (i - 1) / 2] = 1;
		for (int j = 1; j < i - 1; j++) {
			List[i * (i - 1) / 2 + j] = List[i * (i - 1) / 2 + j - i + 1] + List[i * (i - 1) / 2 + j - i];
		}
		List[i * (i + 1) / 2 - 1] = 1;
	}

	for (int i = 1; i <=n; i++) {    //输出
		for (int j = 0; j < i ; j++) {
			std::cout << List[i * (i - 1) / 2 + j] << " ";
		}
		std::cout << "\n";
	}

	return 0;
}