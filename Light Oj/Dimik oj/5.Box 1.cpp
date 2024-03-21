#include<iostream>
using namespace std;

int main(){
    int test;
    cin>>test;

    int number;
    while(test--){
        cin>>number;
        for(int i=0;i<number;i++){
             for(int j=0;j<number;j++){
                 cout<<"*";
             }
             cout<<endl;
        }
        if(test>=1){
           cout<<endl;
        }
    }
    return 0;
}