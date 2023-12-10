#include <iostream>
#include <string>

using namespace std;

int main() {
    long long int a;
    while (cin >> a) {
        if (a == 0) {
            cout << "0" << endl;
            continue;
        }

        string hex;
        const string hexChars = "0123456789ABCDEF";

        while (a) {
            int digit = a % 16;
            hex = hexChars[digit] + hex;
            a /= 16;
        }

        cout << hex << endl;
    }
    return 0;
}
