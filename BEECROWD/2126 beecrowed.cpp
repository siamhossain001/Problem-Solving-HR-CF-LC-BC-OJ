#include <iostream>
#include <string>

using namespace std;
 
int main() {
    string num;
    string find;
    int sub, a, b, c, d, q, test = 0, pos;

    while (cin >> num >> find) {
        a = num.size();
        b = find.size();
        c = 0;
        d = 0;
        q = 0;
        pos = 0;

        while (c < b) {
            if (num[d] == find[c]) {
                pos = c + 1;
                for (d = 0; d < a; d++) {
                    if (num[d] == find[c]) {
                        q++;
                        c++;
                    } else {
                        break;
                    }
                }
                if (q == a) {
                    sub++;
                }
                q = 0;
                d = 0;
            } else {
                c++;
            }
        }
        test++;

        if (sub != 0) {
            cout << "Caso #" << test << ":" << endl;
            cout << "Qtd.Subsequencias: " << sub << endl;
            cout << "Pos: " << pos << endl;
        } else {
            cout << "Caso #" << test << ":" << endl;
            cout << "Nao existe subsequencia" << endl;
        }
        sub = 0;
    }

    return 0;
}
