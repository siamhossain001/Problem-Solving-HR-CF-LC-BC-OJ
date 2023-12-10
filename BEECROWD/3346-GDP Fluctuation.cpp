#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Input GDP fluctuations for the first and second years
    double F1, F2;
    cin >> F1 >> F2;

    // Calculate the GDP fluctuation for the whole analyzed period
    double result = ((1 + F1 / 100) * (1 + F2 / 100) - 1) * 100;

    // Print the result with six digits after the decimal point
    cout << fixed << setprecision(6) << result << endl;

    return 0;
}