#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

int main(){
     
     int test;
     int p,q,freeRoom=0;

     cin>>test;
     while(test--){
         cin>>p>>q;
        if(p<q){
            if((q-p)>=2){
            freeRoom++;
            }
        }
     }

     cout<<freeRoom<<endl;
    return 0;
}