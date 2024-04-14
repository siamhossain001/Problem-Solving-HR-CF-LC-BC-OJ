#include <iostream>
#include <vector>
#include <cmath>
#include<set>
#include<map>
#include<algorithm>

typedef long long ll;

using namespace std;

bool squre(ll sum){
    ll carry = 0;
    carry = sqrt(sum);
    carry = carry*carry;
    if(sum==carry){
        return true;
    }
    else {
        return false;
    }
}
int main() {
    int test;
    int N;

    cin>>test;
    while(test--){
    cin>>N;
        ll input;
        ll sum = 0;
        for(int i=0;i<N;i++){
            cin>>input;
            sum+=input;
        }
        if(squre(sum)){
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
    }

    return 0;
}