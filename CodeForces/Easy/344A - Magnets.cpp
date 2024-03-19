#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include<vector>

using namespace std;

int main() {
    
    int counter=0,test;
    
    string input;
    string carry="*";
    cin>>test;

    while(test--){
        cin>>input;
        if(carry=="*"){
            carry = input;
            counter++;
        }
        else if(carry==input){
            continue;
        }
        else{
            carry = input;
            counter++;
        }
    }
    cout<<counter<<endl;

    return 0;
}
