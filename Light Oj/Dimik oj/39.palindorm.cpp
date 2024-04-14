#include<iostream>
#include<vector>

using namespace std;

bool ispalindrom(string input){
   int backWay = input.size()-1;
   for(int i=0;i<input.size()/2;i++){
       if(input[i]!=input[backWay]){
         return false;
       }
       backWay--;
   }
   return true;
}
int main(){
   string input;
   int test;
   cin>>test;
   
    while(test--){
   cin>>input;

   if(ispalindrom(input)){
      cout<<"Yes! It is palindrome!"<<endl;
   }
   else {
       cout<<"Sorry! It is not palindrome!"<<endl;
   }
 }
   return 0;
}