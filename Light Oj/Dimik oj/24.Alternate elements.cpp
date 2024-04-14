#include<iostream>
#include<vector>
#include<array>

using namespace std;

int main(){
    
    int N,test;
    cin>>test;
    
    while(test--){
    cin>>N;
    
    vector<int> ar(N);

    for(int i=0;i<N;i++){
        cin>>ar[i];
    } 

    for(int i=0;i<N;i+=2){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    }
    return 0;
}