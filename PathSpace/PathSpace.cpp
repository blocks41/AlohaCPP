#include <iostream>
#include <filesystem>

using std::cout;
using std::endl;
namespace fs = std::filesystem;

int main() {
	//����·������
	fs::path p{ "C:\\" };

	//չʾ���̵��ܴ�С
	cout << "C:total space: " << fs::space(p).capacity << endl;
	cout << "C:available space: " << fs::space(p).available << endl;
}