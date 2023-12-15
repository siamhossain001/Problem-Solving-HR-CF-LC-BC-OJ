#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
string mirrorSequence(string input){
    string output = input;
    for(int i=input.size()-1; i>=0 ; i--){
        output+=input[i];
    }
    return output;
}
int main(){

    int a,b,test;
    string input = "";
    string output;
    cin>>test;
    
    while(test--){
        cin>>a>>b;
        for(int i=a;i<=b;i++){
            input+=to_string(i);
        }
        output = mirrorSequence(input);
        cout<<output<<endl;
        input="";
    }
    return 0;
}