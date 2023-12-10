#include <iostream>
#include<iomanip>
#include<vector>

using namespace std;

int main() {
    int test;
    cin>>test;
    
    int a,b,carry;
    while(test--){
        cin>>a>>b;
        if(a%b==0){
            cout<<int(0)<<endl;
        }
        else {
            cout<<b-(a%b)<<endl;
        }
    }   
    return 0;
}