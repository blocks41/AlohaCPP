#include <iostream>
#include <cstdlib>
#include <limits>
    
using namespace std;

class MyComplex {
private:
    double a;
    double b;
public:
    MyComplex() {
        a = 0;
        b = 0;
    }
    MyComplex(double a_, double b_) {
        a = a_;
        b = b_;
    }
    friend ostream& operator <<(ostream& os, const MyComplex& z);
    friend istream& operator >>(istream& is, MyComplex& z);
    MyComplex operator +(const MyComplex& z2);
    MyComplex operator -(const MyComplex& z2);
    MyComplex operator *(const MyComplex& z2);
    MyComplex operator /(const MyComplex& z2);
};

ostream& operator <<(ostream& os, const MyComplex& z) {
    os.unsetf(std::ios::showpos);
    os << "(" << z.a;
    os.setf(std::ios::showpos);
    os << z.b << "i)";
    return os;
}
istream& operator >>(istream& is, MyComplex& z) {
    is >> z.a >> z.b;
    return is;
}
MyComplex MyComplex::operator +(const MyComplex& z2) {
    return MyComplex(this->a + z2.a, this->b + z2.b);
}
MyComplex MyComplex::operator -(const MyComplex& z2) {
    return MyComplex(this->a - z2.a, this->b - z2.b);
}
MyComplex MyComplex::operator *(const MyComplex& z2) {
    return MyComplex(this->a * z2.a-this->b*z2.b
        , this->b * z2.a + this->a * z2.b);
}
MyComplex MyComplex::operator /(const MyComplex& z2) {
    if (z2.a == 0 && z2.b == 0) {
        throw runtime_error("Divisor is 0");;
    }
    return MyComplex((this->a * z2.a + this->b * z2.b)/(z2.a*z2.a+z2.b*z2.b)
        , (this->b * z2.a - this->a * z2.b) / (z2.a * z2.a + z2.b * z2.b));
}

int main() {
    MyComplex z1, z2;
    std::cin >> z1;
    std::cin >> z2;
    try {
        std::cout << "z1 + z2 = " << z1 + z2 << std::endl;
        std::cout << "z1 - z2 + z1 = " << z1 - z2 + z1 << std::endl;
        std::cout << "z1 * z2 - z1 = " << z1 * z2 - z1 << std::endl;
        std::cout << "z1 / z2 + z1 = ";
        std::cout << z1 / z2 + z1 << std::endl;
        std::cout << "z2 - z1 / z1 = ";  // ����䲻������һ�����һ��
        // �����쳣ʱ�������Ϣ������ϵͳ��ʵ��
        std::cout << z2 - z1 / z1 << std::endl;
        std::cout << "Finished";
    }
    catch (exception& e) {  // catch�����쳣���ͣ�Ҳ���Բ��������쳣
        std::cout << e.what()
            << std::endl;  // what()������������쳣�����е���Ϣȡ����
        std::cout << "Unexpected Error";
    }

    // GCC��VC�������ڵ���ģʽ�»���ͣ�����ڲ鿴���н��
#if (defined(__DEBUG__) || defined(_DEBUG))
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
#endif
    return 0;
}