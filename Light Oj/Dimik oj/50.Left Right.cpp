#include <iostream>
using namespace std;
int main() {
    
    string input;
    string output;
    int test;
    cin>>test;
    
    char carry;
    while(test--){
        cin>>input;

        output="";
        for(int i=0;i<input.size();i++){
            if(input[i]=='L'){
                carry = input[i-1];
                output+=carry;
            }
            else if(input[i]=='R'){
                carry = input[i+1];
                output+=carry;
            }
            else {
                output+=input[i];
            }
        }
        cout<<output<<endl;
    }
    return 0;
}