// morechar.cpp -- the char type and int type contrasted

#include <iostream>

int main() {
    using namespace std;
    char ch = 'M';
    int i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;

    ch = ch + 1;
    i = i + 1;
    cout << "The ASCII code for " << ch << " is " << i << endl;
    cout << "Display char ch using cout.put(ch): ";
    cout.put(ch);
    cout.put('!');
    cout << endl;
    return 0;
}
