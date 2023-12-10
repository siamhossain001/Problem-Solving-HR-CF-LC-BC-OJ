#include <iostream>

using namespace std;

int count_participants_advancing(int n, int k, int scores[]) {
    int kth_place_score = scores[k - 1];
    int advancing_participants = 0;

    for (int i = 0; i < n; ++i) {
        if (scores[i] >= kth_place_score && scores[i] > 0) {
            advancing_participants++;
        } else {
            break;
        }
    }

    return advancing_participants;
}

int main() {
    int n, k;
    cin >> n >> k;

    int scores[n];
    for (int i = 0; i < n; ++i) {
        cin >> scores[i];
    }

    int result = count_participants_advancing(n, k, scores);
    cout << result << endl;

    return 0;
}
