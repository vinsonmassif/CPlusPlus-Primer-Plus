// init.cpp -- type changes on initalization

#include <iostream>

int main() {
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tree = 3;
    int guess(3.9832);
    int debt = 7.2E12;
    cout << tree << endl;
    cout << guess << endl;
    cout << debt << endl;
    return 0;
}

