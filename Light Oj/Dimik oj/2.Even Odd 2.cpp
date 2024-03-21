#include<iostream>
using namespace std;

bool iseven(string number){
      int n = number.length()-1;
      int convater = number[n]-'0';
      if(convater%2==0){
         return true;
      }
      else {
          return false;
      }
}
int main(){
    int T;
    cin>>T;

    string number;
    while(T--){
        cin>>number;
        if(iseven(number)){
            cout<<"even"<<endl;
        }
        else {
            cout<<"odd"<<endl;
        }

    }
    return 0;
}