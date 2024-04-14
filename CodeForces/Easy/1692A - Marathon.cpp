#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
#include<complex>

using namespace std;

int main() {
    
    int test;
    cin>>test;
    
    int timur,b,c,d,counter=0;
    while(test--){
        cin>>timur;
        cin>>b>>c>>d;
        if(timur<b){
            counter++;
        }
        if(timur<c){
           counter++;
        }
        if(timur<d){
           counter++;
        }
        
        cout<<counter<<endl;
        counter=0;
    }
        
    return 0;
}
