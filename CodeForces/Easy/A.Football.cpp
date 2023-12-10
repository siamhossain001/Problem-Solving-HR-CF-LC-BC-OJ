#include<iostream>

using namespace std;

string isdanger(string input){
     int count=1;
     for(int i=0;i<input.size();i++){
          if(input[i]==input[i-1]){
                count++;
                if(count==7){
                    return "YES";
                }
          }
          else {
               count=1;
          }
     }
     return "NO";
}
int main(){
    string input;
    cin>>input;

    cout<<isdanger(input)<<endl;

    return 0;
}