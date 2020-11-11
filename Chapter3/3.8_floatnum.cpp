// floatnum.cpp -- floating-point type

#include <iostream>
int main() {
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tub = 10.0/3.0;
    double mint = 10.0/3.0;
    const float million = 1.0e6;

    cout << "tub: " << tub << " tub * million: " << tub * million << " tub * ten million: " << tub * million * 10 << endl;
    cout << "mint: " << mint << " mint * million: " << mint * million << endl;
    return 0;
}
