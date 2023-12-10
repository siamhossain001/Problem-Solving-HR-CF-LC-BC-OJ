#include <iostream>
#include <algorithm>
#include <vector> 
#include <cmath>

using namespace std;

int main() {
    
    int test;
    cin>>test;

    int a,b,c;

    while(test--){
        cin>>a>>b>>c;
        if((a-b)==c){
            cout<<"-"<<endl;
        }
        else {
            cout<<"+"<<endl;
        }
    }
    return 0;
}
