#include <iostream>
#include <algorithm>
#include <vector> 

using namespace std;

bool isEasy(vector<int>&votes){
    for(int i=0;i<votes.size();i++){
        if(votes[i]==1)return false;
    }
    return true;
}
int main() {
    int n;
    cin>>n;

    vector<int> votes(n);

    for(int i=0;i<n;i++){
        cin>>votes[i];
    }

    if(isEasy(votes)){
        cout<<"EASY"<<endl;
    }
    
    else {
        cout<<"HARD"<<endl;
    }
    
    return 0;
}
