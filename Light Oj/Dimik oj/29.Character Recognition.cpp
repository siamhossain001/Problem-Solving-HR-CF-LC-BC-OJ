#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    
    char input;
    while(test--){
        cin>>input;
        if(input>='A' && input<='Z'){
            cout<<"Uppercase Character"<<endl;
        }
        else if(input>='a' && input<='z'){
             cout<<"Lowercase Character"<<endl;
        }
        else if(input>='0' && input<='9'){
             cout<<"Numerical Digit"<<endl;
        }
        else{
             cout<<"Special Characters"<<endl;
        }
    }
    return 0;
}
