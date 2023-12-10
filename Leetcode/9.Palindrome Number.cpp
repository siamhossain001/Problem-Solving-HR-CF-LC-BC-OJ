#include <iostream>

using namespace std;

bool isPalindrome(int num) {
    if (num < 0) {
        return false;
    }

    int original = num;
    int reversed = 0;

    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    if(original==reversed){
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int num;
    cin >> num;

    if (isPalindrome(num)) {
        cout << "Is palindrome" << endl;
    } else {
        cout << "Not palindrome" << endl;
    }

    return 0;
}
