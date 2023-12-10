#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int main(){

    
    int x,b,c,d,t;
    long long int odd;
    cin>>t;
    while(t--){
 
    cin>>x;
    vector<long long int> ar;
    
    
    for(int i=0;i<x;i++){
        cin>>odd;
        if(odd%2!=0){
            ar.push_back(odd);
        }
    }
    c = ar.size();
    vector<int> bigsmall(c);

    sort(ar.rbegin(), ar.rend());
    
    b = c-1;
    d = 0;
    

    for(int i=0;i<c;i++){
        if(i%2==0){
            bigsmall[i]=ar[d];
            d++;
        }
        else{
            bigsmall[i] = ar[b];
            b--;
        }
    }
    
    for(int i=0;i<c;i++){
        if(i==0){
            cout<<bigsmall[i];
        }
        else{
            cout<<" "<<bigsmall[i];
        }
        
    }
    cout<<endl;
 }
    return 0;
}
