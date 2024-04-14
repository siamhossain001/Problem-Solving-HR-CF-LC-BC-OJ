#include<iostream>
using namespace std;

int main(){
    int N,test;
    cin>>test;
    while(test--){
    long long int fac=1;
    cin>>N;
    
    for(int i=2;i<=N;i++){
        fac*=i;
    }
    cout<<fac<<endl;
    }
    return 0;
}