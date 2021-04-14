#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main() {
    ifstream inFile("binary.dat", ios::in | ios::binary);

    if (!inFile) {
        cout << "error" << endl;
        return 0;
    }

    float fea[128];
    int n = 0;
    while (inFile.read((char*)&fea[0], 128 * sizeof(float))) {        //print dim1 of each img
        n++;
    }
    inFile.close();
    cout << n << endl;
    for (int i = 0;i < 128;i++)
        cout << fea[i] << " ";

    return 0;
}