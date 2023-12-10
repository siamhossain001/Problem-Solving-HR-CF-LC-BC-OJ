#include <iostream>
using namespace std;

const int ARRAY_SIZE = 100;
const int VALUE_1 = 1;
const int VALUE_2 = 2;
const int VALUE_3 = 3;

void evenSwapper(int a, int b, int ar[]) {
    if (ar[a + 1] == VALUE_3 || ar[b - 1] == VALUE_3) {
        swap(ar[a], ar[a + 1]);
        swap(ar[b], ar[b - 1]);
    } else {
        swap(ar[a], ar[a + 1]);
    }
}

void oddSwapper(int a, int b, int ar[], int& x) {
    if (ar[b - 2] != VALUE_1 && ar[b + 1] != VALUE_1) {
        swap(ar[a], ar[a + 1]);
        swap(ar[b], ar[b - 1]);
    } else {
        swap(ar[b], ar[b - 1]);
        if (x == 0) {
            ar[a] = VALUE_3;
            x = b;
        }
    }
}

void printer(int a, int ar[]) {
    int b = a;
    int x = 0; // Initialize x here

    for (int i = 0; i < a; ) {
        for (int j = 0; j < a; j++) {
            cout << ar[j];
        }
        cout << endl;
        if (a % 2 == 0) {
            b--;
            evenSwapper(i, b, ar);
            i++;
        } else {
            if (x != 0 && x != -1) {
                ar[x] = VALUE_1;
                x = -1;
            }
            b--;
            oddSwapper(i, b, ar, x);
            i++;
        }
    }
}

int main() {
    int a;
    while(cin>>a){

    int ar[ARRAY_SIZE] = {0}; // Initialize the array with 0s

    for (int i = 1; i < a - 1; i++) {
        ar[i] = VALUE_3;
    }
    ar[0] = VALUE_1;
    ar[a - 1] = VALUE_2;

    printer(a, ar);
    }
    return 0;
}
