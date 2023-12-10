#include <iostream>

using namespace std;

int main() {

    unsigned long long int a1, a2, n, sum;

    cin >> a1 >> a2;

    if (a1 <= 1) {
        sum = (a2 * (a2 + 1)) / 2;
    } else {
        sum = ((a1 + a2) * (a2 - a1 + 1)) / 2;
    }
    
    cout << sum << endl;

    return 0;
}
