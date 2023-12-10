#include <iostream>
#include <string>
using namespace std;

void Dose(int mg) {
    if (mg > 130) {
        cout << "Menos " << mg - 130 << " mg" << endl;
    }
    else if (mg < 110) {
        cout << "Mais " << 110 - mg << " mg" << endl;
    }
    else {
        cout << mg << " mg" << endl;
    }
}

int VitaminC(string input, int a) {
    int tablet;
    if (input == "suco de laranja") {
        tablet = a * 120;
    }
    else if (input == "morango fresco" || input == "mamao") {
        tablet = a * 85;
    }
    else if (input == "goiaba vermelha") {
        tablet = a * 70;
    }
    else if (input == "manga") {
        tablet = a * 56;
    }
    else if (input == "laranja") {
        tablet = a * 50;
    }
    else if (input == "brocolis") {
        tablet = a * 34;
    }
    return tablet;
}

int main() {
    int test;
    while (cin >> test && test > 0) {
        int total = 0;
        while (test--) {
            int a;
            string input;

            cin >> a;
            cin.ignore(); // Add this to consume the newline character.
            getline(cin, input);
            total += VitaminC(input, a);
        }
         Dose(total);
    }
    return 0;
}
