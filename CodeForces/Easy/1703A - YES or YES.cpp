#include<iostream>
#include<vector>  

using namespace std;


bool istrue(string s){
    if(s[0]=='Y' || s[0]=='y'){
        if(s[1]=='e' || s[1]=='E'){
            if(s[2]=='s' || s[2]=='S'){
                return true;
            }
            else{
                return false;
            }
        }
        else {
            return false;
        }
    }
    else{
        return false;
    }
} 
int main(){
    
    int test;
    cin>>test;

    vector <string> input(test);
    for(int i=0;i<test;i++){
        cin>>input[i];
    }

    for(int i=0;i<test;i++){
        if(istrue(input[i])){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}