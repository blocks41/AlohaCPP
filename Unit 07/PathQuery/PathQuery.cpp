#include <iostream>
#include <filesystem>

using std::cout;
using std::endl;
namespace fs = std::filesystem;

int main() {
	//定义路径p
	fs::path p{ R"(C:\Users\zxy\Desktop\vs-test\hellocpp\AlohaCPP\PathQuery\PathQuery.cpp)" };

	//是否存在？根名？根路径？相对路径？
	if (p.empty()) {
		cout << "Path" << p << "is empty." << endl;
	}

	if (!fs::exists(p)) {
		cout << "Path" << p << "does not exist." << endl;
		std::exit(0);
	}
	cout << "root_name():" << p.root_name() << endl
		<< "root_path():" << p.root_path() << endl
		<< "relative_path():" << p.relative_path() << endl;

	//父路径？文件名？文件主干？扩展名？
	cout << "parent_path():" << p.parent_path() << endl
		<< "filename():" << p.filename() << endl
		<< "extension():" << p.extension() << endl;
}