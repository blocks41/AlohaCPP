#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>

using std::ifstream;
using std::ofstream;
using std::cout;
using std::endl;
using std::string;
namespace fs = std::filesystem;

int main() {
	//创建文件输入流，打开score.txt
	fs::path p{ "scores.txt" };
	ifstream input{ p };

	//使用fail()函数检测文件是否打开
	if (input.fail()) {
		cout << "Cant't open file " << p << endl;
		std::exit(0);
	}

	//用>>从文件读数据
/*	string name{ };
	double score{ 0.0 };

	input >> name >> score;
	cout << name << " " << score<<endl;
	input >> name >> score;
	cout << name << " " << score;
*/

	//将文件语句放入循环，使用eof()作为循环条件
	char x;
	while (!input.eof()) {
		input.get(x);
		cout <<x;  
	}
	/*while (input.eof() == false) {
		cout << static_cast<char>(input.get());  //get默认返回int
	}*/

	//关闭文件
	input.close();
}