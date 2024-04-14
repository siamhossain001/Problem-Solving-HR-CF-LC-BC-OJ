#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
#include<complex>

using namespace std;

void ordinary(long long  number){
    int counter = 0;
    if(number<=9){
        counter = number;
    }
    else {
        long long s;
        for(s = 1;s<=number;s = s*10+1){
            for(int i=1 ; i<=9 ; i++){
                 if(s*i<=number){
                    counter++;
                 }
            }
        }
    }
    cout<<counter<<endl;
}
int main() {
    
    int test;
    cin>>test;
    
    long long number;
    while(test--){
        cin>>number;
       ordinary(number);
    }
        
    return 0;
}
