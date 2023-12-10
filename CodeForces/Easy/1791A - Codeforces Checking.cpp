#include <iostream>
#include <vector>
using namespace std;


int main() {
    
    int test;
    cin>>test;
    
    char input;
    while(test--){
        cin>>input;
        if(input=='c' || input=='o' || input=='d' || input=='e' || input=='f' || input=='r' || input=='s'){
            cout<<"YES"<<endl;    
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
