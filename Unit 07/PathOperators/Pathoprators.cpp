//չʾpath��ص�һЩ����������÷�  /=  +=  / 
#include <iostream>
#include <filesystem>
#include <string>

using std::cout;
using std::endl;
namespace fs = std::filesystem;

int main() {
	//����·������
	fs::path p1{ R"(C:\Users)" };
	fs::path p2{ R"(C:\Users)" };
	fs::path p3{ "" };

	//append��/=      append��/=����ļ��ָ���
	p1.append(R"(zxy)");
	p1 /= R"(Desktop)";

	cout << p1 << endl;

	//concat��+=    ������������ļ��ָ���
	p2.concat(R"(zxy)");
	p2 += R"(Desktop)";

	cout << p2 << endl;

	//�������/ƴ��һ����·��
	p3 = p3 / R"(C:\Users)" / R"(zxy)" / R"(Desktop)";

	cout << p3 << endl;
}