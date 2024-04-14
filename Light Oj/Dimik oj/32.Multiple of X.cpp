#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int x,y;
    int test;
    
    cin>>test;
    while(test--){
    cin>>x>>y;
    
    if(x>y){
        cout<<"Invalid!"<<endl;
    }
    else {
        for(int i=x;i<=y;i+=x){
            cout<<i<<endl;
        }
    }
        cout<<endl;
    }
    return 0;
}