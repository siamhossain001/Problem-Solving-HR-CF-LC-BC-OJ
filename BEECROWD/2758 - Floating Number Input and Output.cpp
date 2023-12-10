#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float a, b;
    double c, d;

    cin >> a >> b;
    cin >> c >> d;

    // part 1
    cout << fixed << setprecision(6) << "A = " << a << ", B = " << b << endl;
    cout << fixed << setprecision(6) << "C = " << c << ", D = " << d << endl;

    // part 2
    cout << fixed << setprecision(1) << "A = " << a << ", B = " << fixed << setprecision(1) << b << endl;
    cout << fixed << setprecision(1) << "C = " << c << ", D = " << fixed << setprecision(1) << d << endl;

    // part 3
    cout << fixed << setprecision(2) << "A = " << a << ", B = " << fixed << setprecision(2) << b << endl;
    cout << fixed << setprecision(2) << "C = " << c << ", D = " << fixed << setprecision(2) << d << endl;

    // part 4
    cout << fixed << setprecision(3) << "A = " << a << ", B = " << fixed << setprecision(3) << b << endl;
    cout << fixed << setprecision(3) << "C = " << c << ", D = " << fixed << setprecision(3) << d << endl;

    // part 5
    cout << scientific << uppercase << setprecision(3) << "A = " << a << ", B = " << b << endl;
    cout << scientific << uppercase << setprecision(3) << "C = " << c << ", D = " << d << endl;

    // part 6
    cout << "A = " << fixed << setprecision(0) << a << ", B = " << b << endl;
    cout << "C = " << fixed << setprecision(0) << c << ", D = " << d << endl;

    return 0;
}
