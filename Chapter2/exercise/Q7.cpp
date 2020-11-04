#include <iostream>

using namespace std;

void display(int hour, int min);

int main() {
    int hour;
    int min;
    cout << "Enter the number of hours: ";
    cin >> hour;
    cout << "Enter the number of minutes: ";
    cin >> min;
    display(hour, min);
    return 0;
}

void display(int hour, int min) {
    cout << "Enter the number of hours: " << hour << endl;
    cout << "Enter the number of minutes: " << min << endl;
    cout << "Time: " << hour << ":" << min << endl;
}
