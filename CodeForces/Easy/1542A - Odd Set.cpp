#include <iostream>
#include <vector>
#include <cmath>
#include<set>
#include<map>
#include<algorithm>

typedef long long ll;

using namespace std;

bool OddSet(vector<int> &arr){
    int odd = 0;
    int even = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    if(odd==even){
        return true;
    }
    else{
        return false;
    }
}
int main() {
    int test;
    int N;

    cin>>test;
    while(test--){
    cin>>N;
        vector<int> arr(2*N);
        for(int i=0;i<(2*N);i++){
            cin>>arr[i];
        }

        if(OddSet(arr)){
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
    }

    return 0;
}