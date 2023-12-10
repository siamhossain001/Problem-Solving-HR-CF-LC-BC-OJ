#include<iostream>
#include<stack>

using namespace std;


bool parentheses(string brakets){
    stack <char> input;
    for(int i=0;i<brakets.size();i++){
        if(brakets[i]=='(' || brakets[i]=='{' || brakets[i]=='['){
            input.push(brakets[i]);
        }
        else if(input.size()==0 && (brakets[i]==')' || brakets[i]=='}' || brakets[i]==']')){
            return false;
        }
        else if(input.top()=='(' && brakets[i]==')' || input.top()=='{' && brakets[i]=='}' || input.top()=='[' && brakets[i]==']'){
            input.pop();
        }
        else {
            return false;
        }
    }     
    if(input.size()==0){
        return true;
    }
    else {
        return false;
    }
}
int main(){
    
    string brakets;
    cin>>brakets;
    
    if(parentheses(brakets)){
         cout<<"TRUE"<<endl;
    }
    else {
        cout<<"FALSE"<<endl;
    }
    return 0;
}