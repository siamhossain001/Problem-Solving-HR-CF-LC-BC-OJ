#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int a,b;
  
    int test;

    cin>>test;
    while(test--){
         cin>>a>>b;
         if(a==b){
            cout<<int(0)<<endl;
         }
         else {
            if(a>b && (a-b)%2==0){
                  cout<<int(1)<<endl;
            }
            else if(b>a && (b-a)%2!=0){
                cout<<int(1)<<endl;
            }
            else {
                cout<<int(2)<<endl;
            }
         }
    }   
    return 0;
}