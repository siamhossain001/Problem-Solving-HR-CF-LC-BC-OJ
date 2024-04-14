#include<iostream>
#include<vector>

using namespace std;

int main(){
    
    string word;
    int test;
    
    cin>>test;
    
    while(test--){
        cin>>word;
  
        for(int i=word.size()-1;i>=0;i--){
            cout<<word[i];
        }
        cout<<endl;
    }
    return 0;
}