#include<iostream>
#include<vector>

using namespace std;

bool OddSet(vector<int> &set){
    for(int i=0;i<set.size();i+=2){
         if((set[i]+set[i+1])%2==0){
            return false;
         }
    }
    return true;
}
int main(){
    int test,n;
    cin>>test;
    
    while(test--){
        cin>>n;
        vector<int> set(2*n);  //2n elements
        for(int i=0;i<2*n;i++){
            cin>>set[i];
        }
        
        if(OddSet(set)){
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }

    }
    return 0;
}