#include <iostream>
#include <string>

using namespace std;

int main() {
    unsigned  long long int a;
    while(cin>>a){
        if(a==-1) break;
        else if(a==0){
            cout<<a<<endl;
        }
        else {
            cout<<a-1<<endl;
        }
    }
    return 0;
}