#include <iostream>
#include <cmath>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int n, f1, f2;

    cin >> n;

    while (n--) {
        cin >> f1 >> f2;

        int result = gcd(f1, f2);

        cout << result << endl;
    }

    return 0;
}
