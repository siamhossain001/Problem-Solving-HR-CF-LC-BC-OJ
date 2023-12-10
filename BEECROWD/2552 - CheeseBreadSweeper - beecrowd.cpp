#include <iostream>

using namespace std;

int main() {
    int a, b;
    
    while (cin >> a >> b) {
        int ar[100][100]; // Assuming a maximum size

        // Input 2D array
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                cin >> ar[i][j];
                if (ar[i][j] == 1) {
                    ar[i][j] = 9;
                }
            }
        }

        // Find every 4 ways
        int directions[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                if (ar[i][j] == 0) {
                    int c = 0;
                    for (int d = 0; d < 4; d++) {
                        int ni = i + directions[d][0];
                        int nj = j + directions[d][1];
                        if (ni >= 0 && ni < a && nj >= 0 && nj < b && ar[ni][nj] == 9) {
                            c++;
                        }
                    }
                    ar[i][j] = c;
                }
            }
        }

        // Print the resulting array
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                cout << ar[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}
