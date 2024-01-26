#include <iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
#include<string>

using namespace std;

bool isfound(string s){
    string Vasya = "hello";
    int possition=0;
    for(int i=0;i<s.size();i++){
         if(s[i]==Vasya[possition]){
            possition++;
            if(possition==5)break;
         }
    }

    if(possition==5){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    
    string s;
    cin>>s;
    if(isfound(s)){
        cout<<"YES"<<endl;
    }
    
    else {
      cout<<"NO"<<endl;
    }
    return 0;
}
