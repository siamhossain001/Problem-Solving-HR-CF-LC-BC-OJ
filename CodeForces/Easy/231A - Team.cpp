#include<iostream>
using namespace std;

int main(){
    
    int test;
    cin>>test;
    int a,b,c,sum,count=0;
    while(test--){
        cin>>a>>b>>c;
        sum = a+b+c;
        if(sum>=2){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}