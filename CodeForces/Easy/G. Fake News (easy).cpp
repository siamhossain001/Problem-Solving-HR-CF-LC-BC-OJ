#include<iostream>
#include<vector>

using namespace std;
bool isfake(string input){
    string s ="heidi";
    int possition=0;
    for(int i=0;i<input.size();i++){
        if(input[i]==s[possition]){
            possition++;
        }
    }
    if(possition==5){
        return true;
    }
    else {
        return false;
    }
}

int main(){
    string input;
    cin>>input;

    if(isfake(input)){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }

    return 0;
}