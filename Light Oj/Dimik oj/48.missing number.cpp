#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int N;
    
    int test,counter=1;
    cin>>test;
    
    while(test--){    
        cin>>N;    
        vector<int> arr(N);
        vector<bool> isfound(N,false);  
            
        for(int i=0;i<N-1;i++){
          cin>>arr[i];
          isfound[arr[i]-1] = true;
        }

        for(int i=0;i<N;i++){
            if(isfound[i]==false){
                cout<<i+1<<endl;
                break;
            }
        }       
    }
    
    return 0;
}