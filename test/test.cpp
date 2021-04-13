#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	std::cout 
		<< std::setw(5) << 'a'<< std::setfill('*')<< std::setw(5)<<'b'
		<< std::endl;
	return 0;
}