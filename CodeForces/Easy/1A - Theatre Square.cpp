#include<iostream>
using namespace std;

int main(){
    int m,n,a;
    cin>>m>>n>>a;
    
    long long int flagstoneM = ((m+a)-1)/a;
    long long int flagstoneN = ((n+a)-1)/a;
    
    cout<<flagstoneM * flagstoneN<<endl;
    
    return 0;
}