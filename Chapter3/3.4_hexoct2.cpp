// hexoct2.cpp -- display values in hex and octal

#include <iostream>
int main() {
    using namespace std;
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "chest = " << chest << endl;
    cout << hex;
    cout << "waist = " << waist << endl;
    cout << oct;
    cout << "inseam = " << inseam << endl;
    return 0;
}
