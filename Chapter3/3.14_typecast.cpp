// typecast.cpp -- forcing type changes

#include <iostream>
int main() {
    using namespace std;
    int auks, bats, coots;
    auks = 19.99 + 11.99;
    bats = (int) 19.99 + (int) 11.99;
    coots = int (19.99) + int (11.99);
    char ch = 'Z';
    cout << auks << " " << bats << " " << coots << " " << static_cast<int>(ch) << endl;
    return 0;
}
