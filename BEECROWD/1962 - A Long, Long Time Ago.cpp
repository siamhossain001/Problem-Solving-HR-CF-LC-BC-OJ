#include<iostream>

using namespace std;

int main(){

    int year,test;
     
    cin>>test;
    while(test--){
         cin>>year;
         if(year>2015){
            cout<<year-2014<<" A.C."<<endl;
         }
         else if(year<2015){
            cout<<2015-year<<" D.C."<<endl;
         }
         else {
            cout<<1<<" A.C."<<endl;
         }
    }
    return 0;
}