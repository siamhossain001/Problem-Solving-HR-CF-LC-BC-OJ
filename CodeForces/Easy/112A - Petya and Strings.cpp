#include<iostream>
using namespace std;

string LowerCase(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]=tolower(s[i]);
        }
    }
    return s;
}
int Lexicographical_order(string s1,string s2){
    
    for(int i=0;i<s1.size();i++){
         if(s1[i]<s2[i]){
            return -1;
         }    
         else if(s1[i]>s2[i]){
            return 1;
         }
    }
    return 0;
}
int main(){

    string input1;
    string input2;
    
    cin>>input1>>input2;
    
    input1 = LowerCase(input1);
    input2 = LowerCase(input2);

    if(Lexicographical_order(input1,input2)==0){
         cout<<int(0)<<endl;
    }
    else if(Lexicographical_order(input1,input2)==-1){
        cout<<int(-1)<<endl;
    }
    else {
        cout<<int(1)<<endl;
    }
    return 0;
}