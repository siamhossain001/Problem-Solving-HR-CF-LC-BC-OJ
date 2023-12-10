#include <iostream>
#include <vector>
using namespace std;
int main() {
    
    int x,max,k=0;
    cin>>x;
    vector<int> arr(x);
    
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    
    max = arr[0];
    for(int i=1;i<x;i++){
        if(max>arr[i]){
            cout<<i+1<<endl;
            k=1;
            break;
        }
        else {
            max = arr[i];
        }
    }
    if(k==0)cout<<0<<endl;
    return 0;
}