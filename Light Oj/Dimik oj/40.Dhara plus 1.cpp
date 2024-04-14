#include <iostream>
#include <cstdio>
#include<vector>
#include<cmath>

using namespace std;

int main() {

    int T;
    cin>>T;

    int X,K;
    long long int sum=0;

    while(T--){
        cin>>X>>K;
        
        for(int i=0;i<=K;i++){
            sum +=pow(X,i);
        }

        cout<<"Result = "<<sum<<endl;
        sum = 0;
    }
    return 0;
}