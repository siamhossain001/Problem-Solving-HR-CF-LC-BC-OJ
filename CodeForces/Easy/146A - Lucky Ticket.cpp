#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin>>N;
    char number[N];
    cin>>number;
    
    int a=0,b=0,carry;
    carry = N-1;

    for(int i=0;i<carry;i++){
         if((number[i]=='4' || number[i]=='7') && (number[carry]=='4' || number[carry]=='7')){
             a+=number[i]-'0';
             b+=number[carry]-'0';
             carry--;
         }
         else {
            a=1;
            b=2;
            break;
         }
    }
    if(a==b){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }


    return 0;
}