#include <bits/stdc++.h>
using namespace std;


int main() {
    int a,b,c;
    int n1,n2,n3;
    
    int test,counter=1;
    cin>>test;
    
    while(counter<=test){
        cin>>a>>b>>c;
       if(a>b){
           swap(a,b);
       }    
       if(a>c){
           swap(a,c);
       }
       if(b>c){
           swap(b,c);
       }
      cout<<"Case "<<counter<<": "<<a<<" "<<b<<" "<<c<<endl;
      counter++;
    }
    return 0;
}
