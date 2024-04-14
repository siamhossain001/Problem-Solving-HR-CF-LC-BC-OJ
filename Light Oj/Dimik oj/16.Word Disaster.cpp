#include <iostream>
#include <cstring>
#include<stdio.h>
using namespace std;

string reverse(string input){
     string reverser;
     for(int i=input.size()-1;i>=0;i--){
         reverser.push_back(input[i]);
     }
     return reverser;   
}
int main() {
    string input;
    string carry;
    string output="";
    int test;
    cin>>test;

    cin.ignore();
while(test--){

    getline(cin,input);
    for(int i=0;i<input.size();i++){
        if(input[i]==' '){
            carry = reverse(carry);
            if(i<input.size() && input[i]==' '){
                output+=carry;
                output+=' ';
            }
            else {
                output+=carry;
            }
        carry="";
        }
        else {
            carry.push_back(input[i]);
        }
    }
    if(carry!=""){
     carry = reverse(carry);
     cout<<output+carry<<endl;
    }    
    else {
        cout<<output<<endl;
    }
    output="";
    carry ="";

  }
    return 0;
}