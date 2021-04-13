#include <iostream>
using namespace std;

int main() {

    char c;
    int i = 0;
    do {
        c = cin.get();
        cout << ++i << " : " <<
            static_cast<int>(c) << endl;
    } while (c != 'q');

    return 0;
}