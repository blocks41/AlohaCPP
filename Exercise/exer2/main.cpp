#include <iostream> 
#include <vector>
#include <limits>
#include "array.h"
using namespace std;
int main() {
    vector<int> vi;
    int ti;
    vector<double> vd;
    double td;
    vector<char> vc;
    char tc;

    while (cin.get() != '\n') {
        cin.unget();
        cin >> ti;
        vi.push_back(ti);
    }

    while (cin.get() != '\n') {
        cin.unget();
        cin >> td;
        vd.push_back(td);
    }

    //while (cin.get() != '\n') {
    //    cin.unget();
    //    cin >> tc;
    //    vd.push_back(tc);
    //}

    while (cin >> tc) {
        vc.push_back(tc);
    }

    Array<int> ai(vi);
    Array<double> ad(vd);
    Array<char> ac(vc);

    cout << ai.seek(10) << endl;
    cout << ad.seek(10.0) << endl;
    cout << ac.seek('a') << endl;

    ai.sort();
    ad.sort();
    ac.sort();

    ai.display();
    cout << endl;
    ad.display();
    cout << endl;
    ac.display();

    // GCC及VC编译器在调试模式下会暂停，便于查看运行结果
#if ( defined(__DEBUG__) || defined(_DEBUG) )
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
#endif
    return 0;
}