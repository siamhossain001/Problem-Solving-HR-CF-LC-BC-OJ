#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main() {
    int test,N;
    cin>>test;
    while(test--){
        cin>>N;
        vector<string> input(N);
        for(int i=0;i<N;i++){
            cin>>input[i];
        }
         
        sort(input.begin(),input.end());
         for(int i=0;i<N;i++){
            cout<<input[i]<<endl;
        }

    }
    return 0;
}