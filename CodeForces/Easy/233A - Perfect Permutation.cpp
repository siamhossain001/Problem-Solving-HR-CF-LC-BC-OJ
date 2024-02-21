#include<iostream>
#include<vector>

using namespace std;

void permutation(vector<int> &arr){
    for(int i=0;i<arr.size();i+=2){
        swap(arr[i],arr[i+1]);
    }
}
int main(){
 
    int N;
    cin>>N;
    
    
    if(N%2==0){
       vector<int> arr(N);
       for(int i=0;i<N;i++){
           arr[i] = i+1;
       }        
       permutation(arr);
       for(int i=0;i<N;i++){
           if(i!=N-1){
               cout<<arr[i]<<" ";
           }
           else{
               cout<<arr[i]<<endl;
           }
       }
    }
    else {
        cout<<int(-1)<<endl;
    }
    return 0;
}