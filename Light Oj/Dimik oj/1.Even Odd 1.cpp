#include<iostream>
using namespace std;

int main(){
    int T;
    int N;
    cin>>T;
    while(T--){
        cin>>N;
        if(N%2==0){
            cout<<"even"<<endl;
        }
        else{
            cout<<"odd"<<endl;
        }
    }
    return 0;
}