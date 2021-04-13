//展示path相关的一些特殊运算符用法  /=  +=  / 
#include <iostream>
#include <filesystem>
#include <string>

using std::cout;
using std::endl;
namespace fs = std::filesystem;

int main() {
	//定义路径对象
	fs::path p1{ R"(C:\Users)" };
	fs::path p2{ R"(C:\Users)" };
	fs::path p3{ "" };

	//append和/=      append和/=会加文件分隔符
	p1.append(R"(zxy)");
	p1 /= R"(Desktop)";

	cout << p1 << endl;

	//concat和+=    这两个不会加文件分隔符
	p2.concat(R"(zxy)");
	p2 += R"(Desktop)";

	cout << p2 << endl;

	//用运算符/拼凑一个新路径
	p3 = p3 / R"(C:\Users)" / R"(zxy)" / R"(Desktop)";

	cout << p3 << endl;
}