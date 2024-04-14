#include<iostream>
#include<vector>

using namespace std;


int main(){
   
  int test;
  cin>>test;
  while(test--){
      long long int number;
      long long int temp=0;
      cin>>number;
      while(number){
          temp = temp*10 + number%10;
          number = number/10;
      }
      cout<<temp<<endl;

  }
   return 0;
}