#include <iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
#include<string>

using namespace std;


int main() {
    int n,s;
    cin>>n>>s;
    
    char BG[n];
    for(int i=0;i<n;i++){
        cin>>BG[i];
    }
    
    while(s--){
         for(int i=0;i<n;i++){
            if(BG[i]=='B' && BG[i+1]=='G'){
                swap(BG[i],BG[i+1]);
                i++;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<BG[i];
    }
    cout<<endl;

    return 0;
}
