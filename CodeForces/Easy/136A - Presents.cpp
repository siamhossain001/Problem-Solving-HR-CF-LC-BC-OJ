#include <iostream>
#include <cstdio>
#include<vector>

using namespace std;

int main() {
    // Complete the code.
    int N;
    cin>>N;

    int arr[N];
    vector<int> presents;

    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    for(int i=1;i<=N;i++){
        for(int j=0;j<N;j++){
            if(i==arr[j]){
                presents.push_back(j+1);
            }
        }
    }

    for(int i=0;i<N;i++){
        if(i==N-1){
            cout<<presents[i];
        }
        else{
            cout<<presents[i]<<" ";
        }
    }
    return 0;
}