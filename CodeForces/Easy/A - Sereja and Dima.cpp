#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
using namespace std;

int main() {
    int n;
    cin >> n;

    deque<int> arr(n);

    int dima = 0, sereja = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int i = 0, j = n - 1;
    bool flag = true;
    while (i <= j) {
        if (flag) {
            if (arr[i] > arr[j]) {
                sereja += arr[i];
                i++;
            } else {
                sereja += arr[j];
                j--;
            }
            flag = false;
        } else {
            if (arr[i] > arr[j]) {
                dima += arr[i];
                i++;
            } else {
                dima += arr[j];
                j--;
            }
            flag = true;
        }
    }
    cout << sereja << " " << dima << endl;
    return 0;
}