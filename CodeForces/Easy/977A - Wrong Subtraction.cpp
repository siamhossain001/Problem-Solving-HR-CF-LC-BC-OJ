#include <iostream>
#include <algorithm>
#include <vector> 
#include <cmath>

using namespace std;

int main() {
    long long n,k;
    cin>>n>>k;
    
    int carry;

    while(k){
        if(n%10==0){
            n=n/10;
            k--;
        }
        else {
            if(n%10>0 && k>=n%10){
                k = k-n%10;
                n = (n/10)*10;
            }
            else {
                carry = n%10;
                carry = carry-k;
                n = n/10;
                n = (n*10)+carry;
                k=0;
            }
        }
    }
    
     
        cout<<n<<endl;

    return 0;
}
