#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    
    double number;
    int counter,carry;
    while(test--){
        cin>>number;
        
        carry = number;
        counter = 0;
        while(carry){
            number/=2.00;
            counter++;
            carry = number;
        }
        cout<<counter<<" days"<<endl;
    }
    return 0;
}
