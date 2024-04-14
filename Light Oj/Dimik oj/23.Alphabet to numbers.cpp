#include<iostream>
#include<vector>

using namespace std;

int main(){
    
    string word;
    int test;

    cin>>test;
    while(test--){
        cin>>word;
        for(int i=0;i<word.size();i++){
            cout<<(int)word[i]-64;
        }
        cout<<endl;
    }
    return 0;
}