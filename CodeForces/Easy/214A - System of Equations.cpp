#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
    int a,b,n,m,k,count=0;
    cin>>n>>m;
   
    for(a=0;a<=sqrt(n);a++){
        b = n-a*a;
        if((a+(b*b))==m){     // a always squre root of n means sqrt(n) 
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}