#include <iostream>
#include <algorithm>

using namespace std;
 
void issum(int a, int b, int Maxvalue){
    if(a + b == Maxvalue){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}

int main() {
    int test;
    cin >> test;

    while (test--) {
        int a, b, c;
        cin >> a >> b >> c;

        int Maxvalue = max(a, max(b, c));

        if (Maxvalue == a) {
            issum(b, c, Maxvalue);
        } else if (Maxvalue == b) {
            issum(a, c, Maxvalue);
        } else {
            issum(a, b, Maxvalue);
        }
    }

    return 0;
}
