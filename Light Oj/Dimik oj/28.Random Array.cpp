#include <bits/stdc++.h>
using namespace std;
bool is_Large_To_Small(vector<int> &ar){
    int a,b;
     a = ar[0];
     for(b=1 ; b<ar.size() ; b++){
        if(a<ar[b]){
            return false;
        }
        a = ar[b];
     }
    return true;

}
bool is_Small_To_Large(vector<int> &ar){
     int a,b;
     a = ar[0];
     for(b=1 ; b<ar.size() ; b++){
        if(a>ar[b]){
            return false;
        }
        a = ar[b];
     }
    return true;
}
int main() {
    int test;
    cin>>test;
    
    while(test--){
         int N;
         cin>>N;
         vector<int> ar(N);
         for(int i=0;i<N;i++){
             cin>>ar[i];
         }
         if(is_Small_To_Large(ar) || is_Large_To_Small(ar)){
             cout<<"YES"<<endl;
         }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
