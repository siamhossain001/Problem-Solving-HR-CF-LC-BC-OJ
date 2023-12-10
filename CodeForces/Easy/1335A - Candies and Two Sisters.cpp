#include<iostream>
using namespace std;
int main(){
    int test;
    long long int number;
    
    cin>>test;
    while(test--){
        cin>>number;
        cout<<int((number-1)/2)<<endl;
    }
    
    return 0;
}