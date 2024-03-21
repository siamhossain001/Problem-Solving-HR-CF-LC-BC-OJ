#include<iostream>
#include<cmath>

using namespace std;

bool isinteger(int number){
   double squre_root = sqrt(number);
   if(ceil(squre_root)==floor(squre_root)){
      return true;
   }
   else {
      return false;
   }
}

int main(){
   int number,test;
    cin>>test;
    
    while(test--){
   cin>>number;

   if(isinteger(number)){
      cout<<"YES"<<endl;
   } 
   else {
      cout<<"NO"<<endl;
   }
 }
   
   return 0;
}