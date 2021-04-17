#include <iostream>
#include <fstream>
#include <array>
#include <string>
#include <filesystem>
using std::cout;
using std::endl;
using std::ifstream;
using std::string;

int main() {
    // ���ļ�
    std::filesystem::path p{ "greatwall.txt" };
    ifstream in{ p };
    if (!in) { // !in.fail();
        std::cout << "Can't open file " << p << endl;
        std::abort();
    }
    // ����1��istream::getline����
    constexpr int SIZE = 1024;

    std::array<char, SIZE> buf; // &buf

    while (!in.eof()) {
        in.getline(&buf[0], SIZE, '#');

        cout << &buf[0] << endl;    //C++������
    }

    // ����2 std::getline�������÷�
    std::string name1{ "" };

    in.close();    //ǰ��Ĵ����ǽ��ļ������ˣ���������Ҫ���´�һ��
    in.open(p);
    while (!in.eof()) {
        std::getline(in, name1, '#');
        cout << name1 << endl;
    }

    std::cin.get();
}