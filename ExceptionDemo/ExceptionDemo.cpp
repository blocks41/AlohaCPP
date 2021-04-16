#include <iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	try {
		if (b == 0) {
			throw b;   //throw 后的代码不会执行
		}
		cout << a / b;
	}
	catch (int& e) {
		cout << "second number can not be: " << e << endl;
	}
/*
	if (b == 0) {
		cout << "second number can not be 0!";
		exit(0);
	}

	cout << a / b;
*/
	return 0;
}