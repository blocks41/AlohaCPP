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
	//�����ļ�����������score.txt
	fs::path p{ "scores.txt" };
	ifstream input{ p };

	//ʹ��fail()��������ļ��Ƿ��
	if (input.fail()) {
		cout << "Cant't open file " << p << endl;
		std::exit(0);
	}

	//��>>���ļ�������
/*	string name{ };
	double score{ 0.0 };

	input >> name >> score;
	cout << name << " " << score<<endl;
	input >> name >> score;
	cout << name << " " << score;
*/

	//���ļ�������ѭ����ʹ��eof()��Ϊѭ������
	char x;
	while (!input.eof()) {
		input.get(x);
		cout <<x;  
	}
	/*while (input.eof() == false) {
		cout << static_cast<char>(input.get());  //getĬ�Ϸ���int
	}*/

	//�ر��ļ�
	input.close();
}