#include <iostream>
#include <cstdio>
#include<vector>
#include<cmath>

using namespace std;
int main() {

    int T;
    cin>>T;

    int K;
    double sum=0;
    int temp;
    while(T--){
        cin>>K;
        if(K>=1){
            for(int i=K;i>=2;i--){
                cout<<int(2)<<"^"<<i<<" + ";
            }
            cout<<int(2)<<" + "<<int(1)<<endl;
        }
        
        else {
            cout<<int(1)<<endl;
        }
    }

    return 0;
}