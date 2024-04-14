#include <iostream>
using namespace std;

// Function to find the GCD of two numbers
long long int gcd(long long int a, long long int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to find the LCM of two numbers
long long int lcm(long long int a, long long int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    long long int num1, num2;
    int test;
    cin>>test;

    while(test--){
    cin >> num1;
    cin >> num2;
    cout <<"LCM = " <<lcm(num1, num2) << endl;
    }

    return 0;
}