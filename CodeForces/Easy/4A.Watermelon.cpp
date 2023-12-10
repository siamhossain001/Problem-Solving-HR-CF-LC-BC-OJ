#include<iostream>
using namespace std;

bool isEven(int number){
    if(number%2==0 && number!=2)return true;
    else return false;
}
int main(){

    int number;
    cin>>number;

    if(isEven(number)){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }

    return 0;
}