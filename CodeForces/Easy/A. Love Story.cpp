#include <iostream>
#include<iomanip>
#include<vector>
#include<algorithm>

using namespace std;
int main(){

    string s = "codeforces";
    string input;
    int test,count;

    cin>>test;

    while(test--){
        count=0;
        cin>>input;
        for(int i=0;i<input.size();i++){
              if(s[i]!=input[i]){
                  count++;
              }
        }
        cout<<count<<endl;
    }
  
    return 0;
}