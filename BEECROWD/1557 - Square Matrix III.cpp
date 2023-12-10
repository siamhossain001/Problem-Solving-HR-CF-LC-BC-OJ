#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

long long int ar[100][100];

void pattern(int a) {
    long long int b = 2, k;
    for (int i = 0; i < a; i++) {
        k = i;
        for (int j = 0; j < a; j++) {
            ar[i][j] = pow(2, k);
            k++;
        }
    }
}

void printer(int a) {
    int width = 1;
    long long int maxNumber = ar[a - 1][a - 1];

    while (maxNumber >= 10) {
        maxNumber /= 10;
        width++;
    }

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            if (j > 0) {
                cout << " ";
            }
            cout << setw(width) << ar[i][j];
        }
        cout << endl;
    }
}

int main() {
    int a;
    while (1) {
        cin >> a;
        if (a == 0) break;
        pattern(a);
        printer(a);
        cout << endl;
    }

    return 0;
}
