#include <iostream>

using namespace std;

int main() {
    int a, b, c, s;

    cout << "Number: ";
    cin >> c;

    do {
        a = c % 10;
        c = c / 10;
        s = c;
        while (s > 0) {
            b = s % 10;
            s = s / 10;
            if (a == b) {
                cout << "yes" << endl;
                a = 77;
                break;
            }
        }
        if (a == 77)
            break;
    } while (c != 0);
    if (a != 77)
        cout << "no" << endl;
    return 0;
}
