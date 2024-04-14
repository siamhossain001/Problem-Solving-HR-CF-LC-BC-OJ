#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int k;
    char alpha;
    int test;

    cin>>test;
    while(test--){
    vector<bool> arr(26,false);
    cin>>k;
    for(int i=0;i<k;i++){
        cin>>alpha;
        arr[alpha-'a']=true;
    }
    
    for(int i=26;i>=0;i--){
        if(arr[i]==true){
            cout<<i+1<<endl;
            break;
        }
    }
    }   
    return 0;
}