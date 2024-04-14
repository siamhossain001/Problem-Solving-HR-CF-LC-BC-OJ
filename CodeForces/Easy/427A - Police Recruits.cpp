#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
int main() {
    int n;
    cin>>n;
    
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int hire = 0;
    int crime = 0;

    for(int i=0;i<n;i++){
        if(hire==0 && arr[i]==-1){
            crime++;
        }
        else if(hire>0 && arr[i]==-1){
            hire+=arr[i];
        }
        else {
            hire+=arr[i];
        }
    }
    cout<<crime<<endl;
    return 0;
}