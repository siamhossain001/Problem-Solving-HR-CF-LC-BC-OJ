#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;

string PetyProgram(string word){
    string result = "";
    for(int i=0;i<word.size();i++){
         char carry = tolower(word[i]);
         if(carry !='a' && carry!='e' && carry!='i' && carry!='o' && carry!='u' && carry!='y'){
            result+='.';
            result+=carry;
         }       
    }
    return result;
}
int main() {
    string word;
    cin>>word;
    cout<<PetyProgram(word)<<endl;
    
    return 0;
}