#include <iostream>
#include <filesystem>

using std::cout;
using std::endl;
namespace fs = std::filesystem;

int main() {
	//定义路径对象
	fs::path p{ "C:\\" };

	//展示磁盘的总大小
	cout << "C:total space: " << fs::space(p).capacity << endl;
	cout << "C:available space: " << fs::space(p).available << endl;
}