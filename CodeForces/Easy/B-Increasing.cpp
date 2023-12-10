#include <iostream>
#include <algorithm>
#include <vector> 

using namespace std;
 
bool isincreasing(vector<int>&ar){
    for(int i=0;i<ar.size();i++){
        if(ar[i]>=ar[i+1] && (i+1)<ar.size() ){
            return false;
        }
    }
    return true;
}
int main() {
    int test,N;
    cin >> test;

    while (test--) {
        cin>>N;
        vector<int> ar(N);
        
        for(int i=0;i<N;i++){
            cin>>ar[i];
        }
        
        sort(ar.begin(),ar.end());

        if(isincreasing(ar)){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }

    }

    return 0;
}
