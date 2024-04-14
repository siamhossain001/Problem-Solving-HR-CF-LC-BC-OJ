#include <iostream>
#include <cstdio>
#include<vector>
#include<cmath>
#include<iomanip>
using namespace std;
int factor(int N){
    int temp=1;
    for(int i=2;i<=N;i++){
        temp *=i;
    }
    return temp;
}
int main() {

    int T;
    cin>>T;

    int N;
    double sum=0;
    int temp;
    while(T--){
        cin>>N;
        
        for(int i=1;i<=N;i++){
            temp = factor(i);
            sum+= (double)i/temp;
        }

        cout<<fixed<<setprecision(4)<<sum<<endl;
        sum = 0;
    }
    return 0;
}