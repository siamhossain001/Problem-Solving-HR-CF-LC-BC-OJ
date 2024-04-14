#include<iostream>
#include<vector>

using namespace std;


int main(){
   
    vector<int> prime={2,3};
    int number;
    
    cout<<"Enter the number: ";
    cin>>number;
    for(int i=4;i<=number;i++){
       for(int j=0;j<prime.size();j++){
           if(i%prime[j]==0){
               break;
           }
           if(j==prime.size()-1){
               prime.push_back(i);
           }
       }
    }

    for(int i=0;i<prime.size();i++){
        cout<<prime[i]<<" ";
    }

    
    return 0;
}