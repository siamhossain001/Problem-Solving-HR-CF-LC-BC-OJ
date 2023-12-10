#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

int main(){

    int x;
    cin>>x;
    
    int sum=0;
    vector<int> drinks(x);

    for(int i=0;i<x;i++){
        cin>>drinks[i];
    } 

    for(int i=0;i<x;i++){
        sum+=drinks[i];
    }
    double carry = double(sum)/x;

    cout<<fixed<<setprecision(12)<<carry<<endl;
    return 0;
}