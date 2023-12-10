#include <iostream>
#include <algorithm>
#include <vector> 
#include <cmath>
using namespace std;


int main() {
    
    int test;
    cin>>test;

    int sum=0;
    string s;

    while(test--){
        cin>>s;
        if(s=="X++" || s=="++X"){
            sum++;
        }
        else {
            sum--;
        }
    }
    cout<<sum<<endl;
    return 0;
}
