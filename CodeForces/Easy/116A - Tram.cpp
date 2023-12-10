#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

int main(){
    int max = 0,enterPassengers=0;
    int a,b;
    int test;   
    
    cin>>test;
    while(test--){
        cin>>a>>b;
        enterPassengers +=b-a;
        if(enterPassengers>max){
            max = enterPassengers;
        }
    }
    cout<<max<<endl;

    return 0;
}