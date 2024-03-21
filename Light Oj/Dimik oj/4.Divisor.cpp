#include<iostream>
using namespace std;

int main(){

   int test;
   cin>>test;
   
   int number;
   for(int i=1;i<=test;i++){
       cin>>number;
       cout<<"Case "<<i<<": ";
       for(int j=1;j<=number;j++){
           if(number%j==0){
              cout<<j<<" ";
           }
       }
       cout<<endl;
   }
    return 0;
}