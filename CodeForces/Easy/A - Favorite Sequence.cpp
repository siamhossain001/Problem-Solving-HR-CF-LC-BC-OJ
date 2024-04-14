#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
using namespace std;

int main() {
    int N;
    int test;

    cin>>test;
    while(test--){
        cin>>N;
        int arr[N];
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        
        bool flag = true;
        int i = 0 , j = N-1;
        while(i!=j){
           if(flag){
              cout<<arr[i]<<" ";
              flag = false;
              i++;
           }
           else {
              cout<<arr[j]<<" ";
              flag = true;
              j--;
           }
        } 
        cout<<arr[i]<<endl;
    }  
    return 0;
}