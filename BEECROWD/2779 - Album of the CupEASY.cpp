#include <iostream>
 
using namespace std;
int arr[100];
int main() {
 
    int N,M,X;
    cin>>N>>M;
    for(int i=0;i<N;i++){
        arr[i] = i+1;
    }
    for(int i=0;i<M;i++){
        cin>>X;
        if(arr[X-1]==X){
            N--;
            arr[X-1] = 0;
        }
    }
    cout<<N<<endl;
    
    return 0;
}