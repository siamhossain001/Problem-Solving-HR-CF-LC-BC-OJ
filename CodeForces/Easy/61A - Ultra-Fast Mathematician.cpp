#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
#include<complex>

using namespace std;

int main() {
    
    string number1;
    string number2;
    string output="";
    cin>>number1>>number2;
    
    int len1=number1.length();
    int len2=number2.length();
    
    int i=0;
    int j=0;
    while(len1>i || len2>j){
        if(number1[i]==number2[j]){
            output.push_back('0');
            i++;
            j++;
        }
        else{
            output.push_back('1');
            i++;
            j++;
        }

    }
    cout<<output<<endl;
    return 0;
}
