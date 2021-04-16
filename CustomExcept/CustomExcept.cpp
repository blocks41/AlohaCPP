#include <iostream>
#include <exception>
#include "Vec3D.h"
using std::cout;
using std::endl;
// ����4�����������д���Vec3D���󲢵���[]����Խ������
// �����쳣������쳣�е���Ϣ
int main() {
    Vec3D v1{ 1.2, 3.2, 4.3 };
    try {
        v1[1] = 1.0;
        cout << v1[4];
    }
    catch (RangeException& e) {
        cout << "Exception: " << e.what() << endl;
        if (typeid(e) == typeid(RangeException)) {
            auto r = dynamic_cast<RangeException&>(e);
            cout << "Vector dimension: " << r.getDimension() << endl;
            cout << "Index: " << r.getIndex() << endl;
        }
    }
}