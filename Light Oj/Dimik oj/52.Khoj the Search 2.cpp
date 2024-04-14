#include <iostream>
#include <vector>
using namespace std;

//KMP algorithm use

// Function to compute the longest proper prefix-suffix values
vector<int> computeLPSArray(string pattern) {
    int m = pattern.length();
    vector<int> lps(m);
    int len = 0, i = 1;

    lps[0] = 0; // Base case

    while (i < m) {
        if (pattern[i] == pattern[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0)
                len = lps[len - 1];
            else {
                lps[i] = 0;
                i++;
            }
        }
    }

    return lps;
}

// Function to find the count of occurrences of the pattern in the text
int findPatternCount(string text, string pattern) {
    int n = text.length();
    int m = pattern.length();
    int count = 0;

    vector<int> lps = computeLPSArray(pattern);

    int i = 0, j = 0;
    while (i < n) {
        if (text[i] == pattern[j]) {
            i++;
            j++;
        }

        if (j == m) {
            count++;
            j = lps[j - 1];
        } else if (i < n && text[i] != pattern[j]) {
            if (j != 0)
                j = lps[j - 1];
            else
                i++;
        }
    }

    return count;
}

int main() {
    int test;
    cin >> test;

    while (test--) {
        string s1, s2;
        cin >> s1 >> s2;

        int count = findPatternCount(s1, s2);
        cout << count << endl;
    }

    return 0;
}