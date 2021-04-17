#include "Stack.h"
#include <iostream>
#include <string>

int main(){
	Stack<> c;

	std::string s{ "Hello world!" };

	for (auto i : s) {
		c.push(i);
	}

	for (; c.empty() != true;) {
		std::cout<<c.pop();
	}
}